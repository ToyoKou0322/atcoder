#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        sort(s.begin(),s.end());

        priority_queue<pair<int,char>> x;

        char curr = s[0];
        int c = 0;
        for(int i=0;i < s.size();i++){
            if(s[i] == curr){
                c++;
            }else{
                x.push({c,curr});
                curr = s[i];
                c = 1;
            }
        }
        x.push({c,curr});

        if(x.top().first > (s.size() + 1) / 2){
            cout << "No" << endl;
            continue;
        }else{
            cout << "Yes" << endl;
        }

        string ans = "";

        while(x.size() > 1){
            pair<int,char> a = x.top();
            x.pop();
            ans += a.second;
            a.first--;
            pair<int,char> b = x.top();
            x.pop();
            ans += b.second;
            b.first--;
            if(a.first > 0){
                x.push(a);
            }

            if(b.first > 0){
                x.push(b);
            }
        }
        if(x.size() == 1){
            ans += x.top().second;
            x.pop();
        }
        cout << ans << endl;
    }
}

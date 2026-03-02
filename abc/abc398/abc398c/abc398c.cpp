#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<pair<long long,long long>> ai(n);
    for(int i=0;i < n;i++){
        int a;
        cin >> a;
        ai[i] = {a,i};
    }

    sort(ai.rbegin(),ai.rend());

    long long curr = ai[0].first;
    long long c = 1;
    for(int i=0;i < n-1;i++){
        if(ai[i+1].first == curr){
            c++;
        }else{
            if(c == 1){
                cout << ai[i].second + 1 << endl;
                return 0;
            }else{
                curr = ai[i+1].first;
                c = 1;
            }
        }
    }

    if(c == 1){
        cout << ai.back().second + 1 << endl;
        return 0;
    }

    cout << -1 << endl;
    return 0;
}


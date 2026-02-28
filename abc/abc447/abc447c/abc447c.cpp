#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    //最初から同じ
    if(s == t){
        cout << 0 << endl;
        return 0;
    }

    //tにsにない文字が含まれているとき
    vector<bool> sUse(1000);
    for(int i=0;i < s.size();i++){
        sUse[s[i]] = true;
    }

    for(int i=0;i < t.size();i++){
        if(!sUse[t[i]]){
            cout << -1 << endl;
            return 0;
        }
    }

    string x = "";
    string y = "";
    for(int i=0;i < s.size();i++){
        if(s[i] != 'A'){
            x.push_back(s[i]);
        }
    }

    for(int i=0;i < t.size();i++){
        if(t[i] != 'A'){
            y.push_back(t[i]);
        }
    }
    //Aを取り除いたとき同じ文字列じゃないないとだめ
    if(x != y){
        cout << -1 << endl;
        return 0;
    }

    vector<int> sCount(x.size()+1);
    vector<int> tCount(x.size()+1);
    int count = 0;
    int curr = 0;
    for(int i=0;i < s.size();i++){
        if(curr < x.size()){
            if(s[i] != x[curr]){
                count++;
            }else{
                sCount[curr] = count;
                curr++;
                count = 0;
            }
        }else{
            count++;
        }
    }
    sCount.back() = count;

    count = 0;
    curr = 0;
    for(int i=0;i < t.size();i++){
        if(curr < x.size()){
            if(t[i] != x[curr]){
                count++;
            }else{
                tCount[curr] = count;
                curr++;
                count = 0;
            }
        }else{
            count++;
        }
    }
    tCount.back() = count;

    long long ans = 0;
    for(int i=0;i < x.size()+1;i++){
        ans += abs(sCount[i]-tCount[i]);
    }

    cout << ans << endl;
    return 0;
}


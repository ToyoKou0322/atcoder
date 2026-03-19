#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<pair<char,int>> p;
    char curr = s[0];
    int count = 1;
    for(int i=1;i < n;i++){
        if(s[i] != curr){
            p.push_back({curr,count});
            curr = s[i];
            count = 1;
        }else{
            count++;
        }
    }
    p.push_back({curr,count});

    int c = 0;
    int preidx = 0;
    int idx = 0;
    for(int i=0;i < p.size();i++){
        if(p[i].first == '1'){
            c++;
            if(c == k-1){
                preidx = i;
            }
            if(c == k){
                idx = i;
                break;
            }
        }
    }

    p[preidx].second += p[idx].second;
    p.erase(p.begin() + idx);

    for(int i=0;i < p.size();i++){
        cout << string(p[i].second, p[i].first);
    }
    cout << endl;
    return 0;
}


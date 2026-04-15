#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    vector<long long> a(t),b(t);
    for(int i=0;i < t;i++){
        cin >> a[i] >> b[i];
    }

    vector<long long> score(n+1,0);

    map<long long,long long> mp;
    mp[0] = n;

    for(int i=0;i < t;i++){
        mp[score[a[i]]]--;
        if(mp[score[a[i]]] == 0){
            mp.erase(score[a[i]]);
        }
        score[a[i]] += b[i];
        if(mp.count(score[a[i]]) == 1){
            mp[score[a[i]]]++;
        }else{
            mp[score[a[i]]] = 1;
        }

        cout << mp.size() << endl;
    }
}


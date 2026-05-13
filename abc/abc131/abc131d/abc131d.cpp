#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<long long,long long>> ba(n);
    for(int i=0;i < n;i++){
        cin >> ba[i].second >> ba[i].first;
    }

    sort(ba.begin(),ba.end());

    long long curr = 0;
    bool ok = true;
    for(int i=0;i < n;i++){
        curr += ba[i].second;
        if(curr > ba[i].first){
            ok = false;
        }
    }

    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}


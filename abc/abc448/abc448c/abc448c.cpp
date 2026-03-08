#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,q;
    cin >> n >> q;
    vector<pair<long long,long long>> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(),a.end());

    for(int v=0;v < q;v++){
        long long k;
        cin >> k;
        vector<long long> b(k);
        for(int i=0;i < k;i++){
            cin >> b[i];
        }

        for(int i=0;i < 6;i++){
            bool is_removed = false;
            for(int j=0;j < k;j++){
                if(a[i].second == b[j]){
                    is_removed = true;
                }
            }
            if(!is_removed){
                cout << a[i].first << endl;
                break;
            }
        }
    }
    return 0;
}


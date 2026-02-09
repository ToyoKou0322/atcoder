#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    vector<long long> ans;

    //最大のAtCoderりこが割れていない時
    long long L1 = a[n-1];

    int l = 0;
    int r = n-1;

    while(r >= 0 && a[r] == L1){
        r--;
    }

    bool ok1 = true;
    while(l < r){
        if(a[l] + a[r] != L1){
            ok1 = false;
            break;
        }
        l++;
        r--;
    }

    if(l == r){
        ok1 = false;
    }

    if(ok1){
        ans.push_back(L1);
    }

    //全て割れている時
    if(n % 2 == 0){
        long long L2 = a[0] + a[n-1];

        bool ok2 = true;
        l = 0;
        r = n-1;
        while(l < r){
            if(a[l] + a[r] != L2){
                ok2 = false;
                break;
            }
            l++;
            r--;
        }

        if(ok2){
            ans.push_back(L2);
        }
    }

    for(int i=0;i < ans.size();i++){
        cout << ans[i] << (i == ans.size() - 1 ? "\n" : " ");
    }

    return 0;
}

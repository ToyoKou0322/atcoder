#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> k(n);
    vector<vector<int>> a(n);
    for(int i=0;i < n;i++){
        cin >> k[i];
        for(int j=0;j < k[i];j++){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }

    vector<vector<double>> cnt(n,vector<double>(100001));

    for(int i=0;i < n;i++){
        for(int j=0;j < k[i];j++){
            cnt[i][a[i][j]]++;
        }
    }

    double ans = 0;
    for(int i=0;i < n;i++){
        for(int j=i+1;j < n;j++){
            double z = 0;
            for(int l=1;l <= 100000;l++){
                double x = cnt[i][l] / k[i];
                double y = cnt[j][l] / k[j];
                z += x * y;
            }
            ans = max(ans,z);
        }
    }

    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int k;
    cin >> k;
    string s,t;
    cin >> s >> t;

    vector<int> takahashi(10);
    vector<int> aoki(10);

    for(int i=0;i < 4;i++){
        takahashi[s[i]-'0']++;
        aoki[t[i]-'0']++;
    }

    vector<double> rest(10);
    long long restsum = 0;
    for(int i=1;i < 10;i++){
        rest[i] = k - (takahashi[i] + aoki[i]);
        restsum += rest[i];
    }

    long long d = restsum*(restsum-1);

    vector<bool> ok(10);

    double ans = 0;

    for(int i=1;i <= 9;i++){
        for(int j=1;j <= 9;j++){
            if(rest[i] == 0 || rest[j] == 0 || (i == j && rest[i] <= 1)) continue;
            long long t_score = 0;
            long long a_score = 0;
            takahashi[i]++;
            aoki[j]++;
            for(int k=1;k <= 9;k++){
                t_score += k*pow(10,takahashi[k]);
                a_score += k*pow(10,aoki[k]);
            }
            if(t_score > a_score){
                if(i != j){
                    ans += (rest[i]*rest[j])/d;
                }else{
                    ans += rest[i]*(rest[i]-1)/d;
                }
            }
            takahashi[i]--;
            aoki[j]--;
        }
    }

    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}


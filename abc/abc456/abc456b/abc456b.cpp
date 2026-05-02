#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    vector<vector<int>> a(3,vector<int>(6));
    double fourc1 = 0;
    double fourc2 = 0;
    double fourc3 = 0;
    double fivec1 = 0;
    double fivec2 = 0;
    double fivec3 = 0;
    double sixc1 = 0;
    double sixc2 = 0;
    double sixc3 = 0;
    for(int i=0;i < 3;i++){
        for(int j=0;j < 6;j++){
            cin >> a[i][j];
            if(a[i][j] == 4){
                if(i == 0){
                    fourc1++;
                }else if(i == 1){
                    fourc2++;
                }else{
                    fourc3++;
                }
            }else if(a[i][j] == 5){
                if(i==0){
                    fivec1++;
                }else if(i==1){
                    fivec2++;
                }else if(i==2){
                    fivec3++;
                }
            }else if(a[i][j] == 6){
                if(i==0){
                    sixc1++;
                }else if(i==1){
                    sixc2++;
                }else{
                    sixc3++;
                }
            }
        }
    }

    double ans = (fourc1/6) * (fivec2/6) * (sixc3/6);
    ans += (fourc1/6) * (sixc2/6) * (fivec3/6);
    ans += (fivec1/6) * (fourc2/6) * (sixc3/6);
    ans += (fivec1/6) * (sixc2/6) * (fourc3/6);
    ans += (sixc1/6) * (fourc2/6) * (fivec3/6);
    ans += (sixc1/6) * (fivec2/6) * (fourc3/6);

    cout << fixed << setprecision(20) << ans << endl;
}

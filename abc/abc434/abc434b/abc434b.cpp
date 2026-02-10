#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    double n,m;
    cin >> n >> m;
    vector<double> a(n),b(n);

    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
    }

    for(int i=1;i <= m;i++){
        double sum = 0;
        double count = 0;
        for(int j=0;j < n;j++){
            if(a[j] == i){
                sum += b[j];
                count++;
            }
        }
        double ave = sum / count;
        cout << fixed << setprecision(30) << ave << endl;
    }

    return 0;
}


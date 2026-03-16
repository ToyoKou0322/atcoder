#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<int> ans = a;
    for(int i=0;i < n-1;i++){
        cout << a[i] << " ";
        if(abs(a[i]-a[i+1]) != 1){
            if(a[i] < a[i+1]){
                for(int j=a[i]+1;j < a[i+1];j++){
                    cout << j << " ";
                }
            }else{
                for(int j=a[i]-1;j > a[i+1];j--){
                    cout << j << " ";
                }
            }
        }
    }
    cout << a.back() << endl;
    return 0;
}


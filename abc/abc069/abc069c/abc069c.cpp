#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    int four = 0;
    int two = 0;
    int odd = 0;
    for(int i=0;i < n;i++){
        cin >> a[i];
        if(a[i] % 4 == 0){
            four++;
        }else if(a[i] % 2 == 0){
            two++;
        }else{
            odd++;
        }
    }

    if(two == 0){
        if(four >= odd-1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        if(four >= odd){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}


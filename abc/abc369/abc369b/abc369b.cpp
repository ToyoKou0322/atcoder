#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<char> s(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> s[i];
    }

    int ans = 0;
    bool firstL = true;
    bool firstR = true;
    int preL = 0, preR = 0;
    for(int i=0;i < n;i++){

        if(s[i] == 'L'){
            if(firstL){
                preL = a[i];
                firstL = false;
            }
            ans += abs(a[i] - preL);
            preL = a[i];
        }else{
            if(firstR){
                preR = a[i];
                firstR = false;
            }
            ans += abs(a[i] - preR);
            preR = a[i];
        }
    }

    cout << ans << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> h(n);
    for(int i=0;i < n;i++){
        cin >> h[i];
    }

    bool drop = false;
    for(int i=1;i < n;i++){
        if(h[i] < h[i-1]){
            if(h[i-1] - h[i] > 1 || drop){
                cout << "No" << endl;
                return 0;
            }
            drop = true;
        }else if(h[i] > h[i-1]){
            drop = false;
        }
    }

    cout << "Yes" << endl;
    return 0;
}


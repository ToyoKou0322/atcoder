#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int n,a;
    cin >> n >> a;
    vector<int> t(n);
    for(int i=0;i < n;i++){
        cin >> t[i];
    }

    int current = t[0] + a;
    cout << current << endl;
    for(int i=1;i < n;i++){
        if(current < t[i]){
            cout << t[i] + a << endl;
            current = t[i] + a;
        }else{
            cout << current + a << endl;
            current += a;
        }
    }

    return 0;
}


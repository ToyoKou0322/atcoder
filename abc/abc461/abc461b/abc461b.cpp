#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < n;i++){
        cin >> b[i];
    }

    for(int i=0;i < n;i++){
        if(b[a[i]-1] != i+1){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<bool> b(n+1,false);
    vector<int> x;

    for(int i=1;i <= n;i++){
        if(!b[i]){
            b[a[i-1]] = true;
        }
    }

    for(int i=1;i <= n;i++){
        if(!b[i]){
            x.push_back(i);
        }
    }

    cout << x.size() << endl;
    for(int i=0;i < x.size();i++){
        cout << x[i] << " ";
    }
    cout << endl;
}


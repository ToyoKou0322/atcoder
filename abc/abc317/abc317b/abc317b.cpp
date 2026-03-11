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

    sort(a.begin(),a.end());
    int curr = a[0];
    for(int i=0;i < n;i++){
        if(curr != a[i]){
            cout << curr << endl;
            return 0;
        }
        curr++;
    }
}


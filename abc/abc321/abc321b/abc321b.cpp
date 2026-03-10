#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n-1);
    for(int i=0;i < n-1;i++){
        cin >> a[i];
    }

    for(int i=0;i <= 100;i++){
        vector<int> c = a;
        c.push_back(i);
        sort(c.begin(),c.end());
        int sum = 0;
        for(int j=1;j < n-1;j++){
            sum += c[j];
        }
        if(sum >= x){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}


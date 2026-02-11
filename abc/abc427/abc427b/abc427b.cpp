#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n+1,0);
    a[0] = 1;
    int sum = 0;

    for(int i=1;i < n+1;i++){
        string x = to_string(a[i-1]);
        int add = 0;
        for(int j=0;j < x.size();j++){
            add += x[j] - '0';
        }
        a[i] += add + sum;
        sum = a[i];
    }

    cout << a[n] << endl;
    return 0;
}


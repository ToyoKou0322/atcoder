#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    vector<long long> a(n);
    a[0] = s[0];
    for(int i=1;i < n;i++){
        int sum = 0;
        for(int j=0;j < i;j++){
            sum += a[j];
        }
        a[i] = s[i] - sum;
    }

    for(int i=0;i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}


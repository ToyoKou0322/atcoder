#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d(n-1);
    for(int i=0;i < n-1;i++){
        cin >> d[i];
    }

    vector<int> prefixSum(n);
    for(int i=0;i < n-1;i++){
        prefixSum[i+1] = prefixSum[i] + d[i];
    }

    for(int i=1;i <= n-1;i++){
        for(int j=i;j <= n-1;j++){
            cout << prefixSum[j] - prefixSum[i-1] << " ";
        }
        cout << endl;
    }
    return 0;
}


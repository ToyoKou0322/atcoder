#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    vector<int> t(n),l(n);
    for(int i=0;i < n;i++){
        cin >> t[i] >> l[i];
    }

    for(int i=1;i <= d;i++){
        int maxWeight = 0;
        for(int j=0;j < n;j++){
            maxWeight = max(maxWeight,t[j]*(l[j]+i));
        }
        cout << maxWeight << endl;
    }
    return 0;
}


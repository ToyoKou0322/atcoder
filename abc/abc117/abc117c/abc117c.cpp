#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long long> x(m);
    for(int i=0;i < m;i++){
        cin >> x[i];
    }

    if(n >= m){
        cout << 0 << endl;
        return 0;
    }

    sort(x.begin(),x.end());

    for(int i=0;i < m;i++){
        cout << x[i] << " ";
    }
    cout << endl;
}


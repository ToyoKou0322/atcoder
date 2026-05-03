#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> l(n),r(n);
    vector<int> imos(200010);
    for(int i=0;i < n;i++){
        cin >> l[i] >> r[i];
        imos[l[i]]++;
        imos[r[i]]--;
    }

    for(int i=1;i < imos.size();i++){
        imos[i] += imos[i-1];
    }

    int a = -1;
    for(int i=1;i < imos.size();i++){
        if(a == -1 && imos[i] > 0){
            a = i;
        }

        if(a != -1 && imos[i] == 0){
            cout << a << " " << i << endl;
            a = -1;
        }
    }
}


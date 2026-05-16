#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long k;
    cin >> k;

    vector<long long> x;
    for(int bit=0;bit < (1 << 10);bit++){
        string a = "";
        for(int i=0;i < 10;i++){
            if(bit & (1 << i)){
                a.push_back(i+'0');
            }
        }
        sort(a.rbegin(),a.rend());
        if(a.size() == 0) continue;
        x.push_back(stoll(a));
    }

    sort(x.begin(),x.end());

    cout << x[k] << endl;
    return 0;
}


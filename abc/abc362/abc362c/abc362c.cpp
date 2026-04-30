#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> l(n),r(n);
    long long lsum = 0;
    long long rsum = 0;
    for(int i=0;i < n;i++){
        cin >> l[i] >> r[i];
        lsum += l[i];
        rsum += r[i];
    }

    if(lsum > 0 || rsum < 0){
        cout << "No" << endl;
        return 0;
    }

    long long d = 0;
    for(int i=0;i < n;i++){
        long long a = r[i] - l[i];
        d += a;
    }

    if(d + lsum < 0){
        cout << "No" << endl;
        return 0;
    }

    vector<long long> x;
    bool ok = false;
    for(int i=0;i < n;i++){
        long long a = r[i] - l[i];
        if(ok){
            x.push_back(l[i]);
            continue;
        }
        if(lsum + a >= 0){
            x.push_back(l[i]-lsum);
            lsum = 0;
            ok = true;
        }else{
            x.push_back(r[i]);
            lsum += a;
        }
    }

    cout << "Yes" << endl;
    for(int i=0;i < x.size();i++){
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long x,y;
    cin >> x >> y;

    vector<long long> a(11,0);
    a[1] = x;
    a[2] = y;
    for(int i=3;i <= 10;i++){
        long long o = a[i-1] + a[i-2];
        string s = to_string(o);
        reverse(s.begin(),s.end());
        a[i] = stoll(s);
    }

    cout << a[10] << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    long long n,q;
    cin >> n >> q;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        a[i] = i+1;
    }

    long long offset = 0;
    for(int i=0;i < q;i++){
        int num;
        cin >> num;
        if(num == 1){
            long long p,x;
            cin >> p >> x;
            long long real_index = (p-1+offset) % n;
            a[real_index] = x;
        }else if(num == 2){
            long long p;
            cin >> p;
            long long real_index = (p-1+offset) % n;
            cout << a[real_index] << endl;
        }else if(num == 3){
            long long k;
            cin >> k;
            offset += k;
        }
    }
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    int q;
    cin >> q;

    vector<int> last_update(n);
    int current_time = 1;
    long long last_x = -1;
    int last_x_time = -1;
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            long long x;
            cin >> x;
            last_x = x;
            last_x_time = current_time;
        }else if(type == 2){
            long long i,x;
            cin >> i >> x;
            if(last_x_time > last_update[i-1]){
                a[i-1] = last_x + x;
            }else{
                a[i-1] += x;
            }
            last_update[i-1] = current_time;
        }else{
            int i;
            cin >> i;
            if(last_x_time > last_update[i-1]){
                cout << last_x << endl;
            }else{
                cout << a[i-1] << endl;
            }
        }
        current_time++;
    }

    return 0;
}


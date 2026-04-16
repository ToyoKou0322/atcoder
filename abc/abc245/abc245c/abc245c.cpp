#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<long long> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < n;i++){
        cin >> b[i];
    }

    bool possible_a = true;
    bool possible_b = true;

    for(int i=1;i < n;i++){
        bool next_a = false;
        bool next_b = false;

        //今回Aを選ぶことができるか
        if(possible_a && abs(a[i]-a[i-1]) <= k) next_a = true;
        if(possible_b && abs(a[i]-b[i-1]) <= k) next_a = true;

        //今回Bを選ぶことができるか
        if(possible_a && abs(b[i] - a[i-1]) <= k) next_b = true;
        if(possible_b && abs(b[i] - b[i-1]) <= k) next_b = true;

        possible_a = next_a;
        possible_b = next_b;
    }

    if(possible_a || possible_b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}


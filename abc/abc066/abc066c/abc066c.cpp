#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    deque<long long> b;
    bool reversed = false;
    for(int i=0;i < n;i++){
        if(reversed){
            b.push_front(a[i]);
        }else{
            b.push_back(a[i]);
        }
        reversed = !reversed;
    }

    if(reversed){
        reverse(b.begin(),b.end());
    }

    for(int i=0;i < n;i++){
        cout << b[i] << " ";
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    int n;
    cin >> n;
    deque<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    std::unique(a.begin(),a.end());

    long long pre = 0;
    long long ans = 0;
    while(!a.empty()){
        int x = a.front();
        if(x == pre + 1){
            pre = x;
            ans++;
            a.pop_front();
        }else{
            if(a.size() >= 2){
                a.push_front(pre + 1);
                a.pop_back();
                a.pop_back();
            }else{
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}


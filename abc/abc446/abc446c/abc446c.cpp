#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <queue>

using namespace std;

void solve(){
    long long n,d;
    cin >> n >> d;
    vector<long long> a(n);
    vector<long long> b(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < n;i++){
        cin >> b[i];
    }

    queue<long long> egg;
    for(int i=0;i < n;i++){
        //朝
        for(int j=0;j < a[i];j++){
            egg.push(i+1);
        }

        //昼
        for(int j=0;j < b[i];j++){
            egg.pop();
        }

        //夜
        while(egg.size() > 0){
            if(i+1 - egg.front() >= d){
                egg.pop();
            }else{
                break;
            }
        }
    }

    cout << egg.size() << endl;
    return;
}

int main(){
   long long t;
   cin >> t;
   for(int i=0;i < t;i++){
        solve();
   }
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;
vector<vector<int>> g;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    deque<int> dq;
    dq.push_back(n);

    for(int i=n-1;i >= 0;i--){
        if(s[i] == 'R'){
            dq.push_front(i);
        }else{
            dq.push_back(i);
        }
    }

    for(int i=0;i <= n;i++){
        cout << dq[i] << " ";
    }
    
    return 0;
}


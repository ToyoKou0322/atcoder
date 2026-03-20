#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    vector<bool> x(1000,false);
    for(int i=0;i < m;i++){
        cin >> a[i];
        x[a[i]] = true;
    }

    vector<int> s;
    for(int i=1;i <= n;i++){
        if(!x[i]){
            cout << i << " ";
            while(!s.empty()){
                cout << s.back() << " ";
                s.pop_back();
            }
        }else{
            s.push_back(i);
        }
    }
    return 0;
}

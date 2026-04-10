#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    vector<int> x(n),y(n);
    for(int i=0;i < n;i++){
        cin >> x[i] >> y[i];
    }

    vector<bool> infection(n+1,false);
    infection[1] = true;
    queue<pair<int,int>> q;
    q.push({x[0],y[0]});
    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        for(int i=0;i < n;i++){
            int l = (a-x[i])*(a-x[i]) + (b-y[i])*(b-y[i]);
            if(l <= d*d){
                if(!infection[i+1]){
                    q.push({x[i],y[i]});
                    infection[i+1] = true;
                }
            }
        }
    }

    for(int i=1;i <= n;i++){
        if(infection[i]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> que;
    while(q--){
        int type;
        cin >> type;
        int h;
        cin >> h;
        if(type == 1){
            que.push(h);
        }else{
            while(!que.empty() && que.top() <= h){
                que.pop();
            }
        }
        cout << que.size() << endl;
    }
    return 0;
}


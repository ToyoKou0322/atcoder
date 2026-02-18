#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    int q;
    cin >> q;
    deque<int> d;
    for(int i=0;i < q;i++){
        int num;
        cin >> num;
        if(num == 1){
            int x;
            cin >> x;
            d.push_back(x);
        }else{
            cout << d.front() << endl;
            d.pop_front();
        }
    }
    return 0;
}


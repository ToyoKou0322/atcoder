#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    int q;
    cin >> q;
    deque<int> card(100,0);
    for(int i=0;i < q;i++){
        int num;
        cin >> num;
        if(num == 1){
            int x;
            cin >> x;
            card.push_front(x);
        }else if(num == 2){
            cout << card.front() << endl;
            card.pop_front();
        }
    }

    return 0;
}


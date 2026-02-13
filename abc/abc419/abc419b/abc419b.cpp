#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int q;
    cin >> q;
    vector<int> box;
    for(int i=0;i < q;i++){
        int num;
        cin >> num;
        if(num == 1){
            int x;
            cin >> x;
            box.push_back(x);
        }else{
            sort(box.begin(),box.end());
            cout << box[0] << endl;
            sort(box.rbegin(),box.rend());
            box.pop_back();
        }
    }
    return 0;
}


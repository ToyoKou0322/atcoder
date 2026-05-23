#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int x;
    cin >> x;
    string ans = "HelloWorld";
    for(int i=0;i < ans.size();i++){
        if(i == x-1){
            continue;
        }
        cout << ans[i];
    }

}


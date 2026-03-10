#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;


    //鳩がどこにいるのかを保存する配列
    vector<int> where(n+1);

    for(int i=1;i <= n;i++){
        where[i] = i;
    }

    //巣に鳩が何匹いるのかを保存する配列
    vector<int> count(n+1,1);

    int multi = 0;
    while(q--){ 
        int num;
        cin >> num;

        if(num == 1){
            int p,h;
            cin >> p >> h;
            if(count[where[p]] == 2){
                multi--;
            }
            if(count[h] == 1){
                multi++;
            }
            count[where[p]]--;
            count[h]++;
            where[p] = h;
        }else if(num == 2){
            cout << multi << endl;
        }
    }
}



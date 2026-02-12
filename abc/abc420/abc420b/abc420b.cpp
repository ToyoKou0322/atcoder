#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    vector<int> score(n);
    for(int i=0;i < m;i++){
        int x = 0,y=0;
        for(int j=0;j < n;j++){
            if(s[j][i] == '0'){
                x++;
            }else{
                y++;
            }
        }

        if(x == 0 || y == 0){
            for(int i=0;i < n;i++){
                score[i]++;
            }
        }else if(x < y){
            for(int j=0;j < n;j++){
                if(s[j][i] == '0'){
                    score[j]++;
                }
            }
        }else if(x > y){
            for(int j=0;j < n;j++){
                if(s[j][i] == '1'){
                    score[j]++;
                }
            }
        }
    }

    int x = 0;
    for(int i=0;i < n;i++){
        x = max(x,score[i]);
    }

    for(int i=0;i < n;i++){
        if(score[i] == x){
            cout << i+1 << " ";
        }
    }
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    vector<bool> seen(n,false);
    for(int i=0;i < n;i++){
        int m = 0;
        for(int j=0;j < n;j++){
            if(seen[j]){
                continue;
            }
            int score = 0;
            for(int k=0;k < n;k++){
                if(s[j][k] == 'o'){
                    score++;
                }
            }
            m = max(m,score);
        }
        for(int j=0;j < n;j++){
            if(seen[j]){
                continue;
            }
            int c = 0;
            for(int k=0;k < n;k++){
                if(s[j][k] == 'o'){
                    c++;
                }
            }
            if(c == m){
                cout << j+1 << " ";
                seen[j] = true;
                break;
            }
        }
    }

}


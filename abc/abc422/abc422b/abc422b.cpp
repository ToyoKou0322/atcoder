#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i=0;i < h;i++){
        cin >> s[i];
    }

    bool ok = true;
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            int c = 0;
            if(s[i][j] == '#'){
                if(i > 0){
                    if(s[i-1][j] == '#'){
                        c++;
                    }
                }

                if(j > 0){
                    if(s[i][j-1] == '#'){
                        c++;
                    }
                }

                if(i < h-1){
                    if(s[i+1][j] == '#'){
                        c++;
                    }
                }

                if(j < w-1){
                    if(s[i][j+1] == '#'){
                        c++;
                    }
                }
                if(!(c == 2 || c == 4)){
                    ok = false;
                }
            }
        }
    }

    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}


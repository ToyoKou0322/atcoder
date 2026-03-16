#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> s(h+12,vector<char>(w+12,'.'));
    for(int i=4;i < h+4;i++){
        for(int j=4;j < w+4;j++){
            cin >> s[i][j];
        }
    }

    string x = "snuke";
    string y = "ekuns";

    for(int i=4;i < h+4;i++){
        for(int j=4;j < w+4;j++){
            string z = "";
            for(int a=i;a < i+5;a++){
                z += s[a][j];
            }
            if(z == x){
                for(int a=i;a < i+5;a++){
                    cout << a-3 << " " << j-3 << endl;
                }
                return 0;
            }else if(z == y){
                for(int a=i+4;a >= i;a--){
                    cout << a-3 << " " << j-3 << endl;
                }
                return 0;
            }
            z = "";
            for(int a=j;a < j+5;a++){
                z += s[i][a];
            }
            if(z == x){
                for(int a=j;a < j+5;a++){
                    cout << i-3 << " " << a-3 << endl;
                }
                return 0;
            }else if(z == y){
                for(int a=j+4;a >= j;a--){
                    cout << i-3 << " " << a-3 << endl;
                }
                return 0;
            }
            z = "";
            for(int a=0;a < 5;a++){
                int l = i+a;
                int m = j+a;
                z += s[l][m];
            }
            if(z == x){
                for(int a=0;a < 5;a++){
                    cout << i+a-3 << " " << j+a-3 << endl;
                }
                return 0;
            }else if(z == y){
                for(int a=4;a >= 0;a--){
                    cout << i+a-3 << " " << j+a-3 << endl;
                }
                return 0;
            }
            z = "";
            for(int a=0;a < 5;a++){
                int l = i+a;
                int m = j-a;
                z += s[l][m];
            }
            if(z == x){
                for(int a=0;a < 5;a++){
                    cout << i+a-3 << " " << j-a-3 << endl;
                }
                return 0;
            }else if(z == y){
                for(int a=4;a >= 0;a--){
                    cout << i+a-3 << " " << j-a-3 << endl;
                }
                return 0;
            }
        }
    }
}


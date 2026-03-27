#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> s(10);
    for(int i=0;i < 10;i++){
        cin >> s[i];
    }

    int a = 0;
    int b = 10;
    int c = 0;
    int d = 10;
    
    //aとbを特定
    bool first = true;
    for(int i=0;i < 10;i++){
        bool exists = false;
        for(int j=0;j < 10;j++){
            if(s[i][j] == '#'){
                exists = true;
                if(first){
                    a = i+1;
                    first = false;
                }
            }
        }
        if(!exists && !first){
            b = i;
            break;
        }
    }

    //cとdを特定
    bool first2 = true;
    for(int i=0;i < 10;i++){
        if(s[a-1][i] == '#' && first2){
            c = i+1;
            first2 = false;
        }
        if(s[a-1][i] == '.' && !first2){
            d = i;
            break;
        }
    }

    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    return 0;
}

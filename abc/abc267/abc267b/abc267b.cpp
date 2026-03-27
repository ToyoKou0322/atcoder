#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    if(s[0] != '0'){
        cout << "No" << endl;
        return 0;
    }

    vector<vector<int>> col(7);
    col[0] = {7};
    col[1] = {4};
    col[2] = {8,2};
    col[3] = {5,1};
    col[4] = {9,3};
    col[5] = {6};
    col[6] = {10};

    for(int i=0;i < 10;i++){
        if(s[i] == '0'){
            for(int j=0;j < 7;j++){
                for(int k=0;k < col[j].size();k++){
                    if(col[j][k] == i+1){
                        col[j].erase(col[j].begin() + k);
                    }
                }
            }
        }
    }

    for(int i=0;i < 7;i++){
        for(int j=i+2;j < 7;j++){
            for(int k=i+1;k < j;k++){
                if(col[i].size() >= 1 && col[j].size() >= 1 && col[k].size() == 0){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}


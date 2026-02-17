#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string t,u;
    cin >> t >> u;

    vector<int> idx;
    for(int i=0;i < t.size();i++){
        if(t[i] == '?'){
            idx.push_back(i);
        }
    }

    for(char a='a';a <= 'z';a++){
        for(char b='a';b <= 'z';b++){
            for(char c='a';c <= 'z';c++){
                for(char d='a';d <= 'z';d++){
                    t[idx[0]] = a;
                    t[idx[1]] = b;
                    t[idx[2]] = c;
                    t[idx[3]] = d;
                    if(t.find(u) != string::npos){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}


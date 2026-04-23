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

    vector<string> t = s;
    sort(t.begin(),t.end());

    do{
        bool ok = true;
        for(int i=1;i < t.size();i++){
            int c = 0;
            for(int j=0;j < m;j++){
                if(t[i][j] != t[i-1][j]){
                    c++;
                }
            }
            if(c != 1){
                ok = false;
            }
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(t.begin(),t.end()));

    cout << "No" << endl;
    return 0;
}


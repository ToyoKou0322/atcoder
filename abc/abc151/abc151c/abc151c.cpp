#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> p(m);
    vector<string> s(m);
    for(int i=0;i < m;i++){
        cin >> p[i] >> s[i];
    }

    vector<bool> ac(n+1,false);
    vector<int> wa(n+1,0);
    int acc = 0;
    int pc = 0;
    for(int i=0;i < m;i++){
        if(s[i] == "AC"){
            if(!ac[p[i]]){
                acc++;
            }
            ac[p[i]] = true;
        }else{
            if(!ac[p[i]]){
                wa[p[i]]++;
            }
        }
    }

    for(int i=1;i <= n;i++){
        if(ac[i]){
            pc += wa[i];
        }
    }

    cout << acc << " " << pc << endl;
    return 0;
}


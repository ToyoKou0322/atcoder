#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0;i < n;i++){
        cin >> p[i];
    }

    int r = 1;
    vector<int> rank(n+1,0);
    while(true){
        int x = 0;
        int k = 0;
        for(int i=0;i < n;i++){
            x = max(x,p[i]);
        }

        for(int i=0;i < n;i++){
            if(p[i] == x){
                p[i] = -1;
                rank[i+1] = r;
                k++;
            }
        }
        r += k;
        bool ok = true;
        for(int i=1;i <= n;i++){
            if(rank[i] == 0){
                ok = false;
            }
        }
        if(ok){
            break;
        }
    }

    for(int i=1;i <= n;i++){
        cout << rank[i] << endl;
    }
    return 0;
}


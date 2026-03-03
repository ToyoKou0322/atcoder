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

    int q;
    cin >> q;
    for(int i=0;i < q;i++){
        int a,b;
        cin >> a >> b;
        for(int j=0;j < n;j++){
            if(p[j] == a || p[j] == b){
                cout << p[j] << endl;
                break;
            }
        }
    }
    return 0;
}


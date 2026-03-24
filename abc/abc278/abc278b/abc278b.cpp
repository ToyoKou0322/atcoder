#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,m;
    cin >> h >> m;

    while(true){
        string sh = to_string(h);
        string sm = to_string(m);
        if(sh.size() == 1){
            sh = '0' + sh;
        }
        if(sm.size() == 1){
            sm = '0' + sm;
        }
        string x = "";
        x += sh[0];
        x += sm[0];
        int a = stoi(x);
        string y = "";
        y += sh[1];
        y += sm[1];
        int b = stoi(y);
        if(a >= 0 && a <= 23 && b >= 0 && b <= 59){
            cout << h << " " << m << endl;
            return 0;
        }

        m = (m+1) % 60;
        if(m == 0){
            h = (h+1) % 24;
        }
    }
}


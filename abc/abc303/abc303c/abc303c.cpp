#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n,m,h,k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    set<pair<int,int>> st;
    for(int i=0;i < m;i++){
        int x,y;
        cin >> x >> y;
        st.insert({x,y});
    }

    int cx = 0,cy = 0;
    for(int i=0;i < n;i++){
        h--;
        if(h < 0){
            cout << "No" << endl;
            return 0;
        }
        if(s[i] == 'U'){
            cy++;
        }else if(s[i] == 'D'){
            cy--;
        }else if(s[i] == 'L'){
            cx--;
        }else if(s[i] == 'R'){
            cx++;
        }
        if(st.find({cx,cy}) != st.end() && h < k){
            h = k;
            st.erase({cx,cy});
        }
    }

    cout << "Yes" << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    int ans = INT_MAX;
    for(int i=0;i < 10;i++){
        set<int> st;
        vector<int> x(10,1);
        for(int j=0;j < n;j++){
            for(int k=0;k < 10;k++){
                if(s[j][k] == i + '0'){
                    if(st.find(k) == st.end()){
                        st.insert(k);
                    }else{
                        st.insert(k + 10*x[k]);
                        x[k]++;
                    }
                }
            }
        }
        ans = min(ans,*prev(st.end()));
    }

    cout << ans << endl;
    return 0;
}

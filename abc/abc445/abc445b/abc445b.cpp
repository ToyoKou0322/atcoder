#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    int m = 0;
    for(int i=0;i < n;i++){
        cin >> s[i];
        int len = s[i].size();
        m = max(m,len);
    }

    vector<string> t(n);
    for(int i=0;i < n;i++){
        if(s[i].size() < m){
            int a = (m - s[i].size())/2;
            for(int j=0;j < a;j++){
                t[i] += '.';
            }
            t[i] += s[i];
            for(int j=0;j < a;j++){
                t[i] += '.';
            }
        }else{
            t[i] = s[i];
        }
    }

    for(int i=0;i < n;i++){
        cout << t[i] << endl;
    }
}


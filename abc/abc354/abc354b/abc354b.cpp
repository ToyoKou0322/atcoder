#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<pair<string,int>> sc;
    int t = 0;
    for(int i=0;i < n;i++){
        string s;
        cin >> s;
        int c;
        cin >> c;
        t += c;
        sc.insert({s,c});
    }

    int x = t % n;

    int num = 0;
    for(auto a:sc){
        if(num == x){
            cout << a.first << endl;
            return 0;
        }
        num++;
    }
}


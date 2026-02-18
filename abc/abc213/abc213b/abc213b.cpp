#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> ai(n);
    for(int i=0;i < n;i++){
        int a;
        cin >> a;
        ai[i] = {a,i+1};
    }

    sort(ai.rbegin(),ai.rend());
    cout << ai[1].second << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<long long,long long>> ai(n);
    for(int i=0;i < n;i++){
        int a;
        cin >> a;
        ai[i] = {a,i};
    }

    sort(ai.begin(),ai.end());

    vector<long long> b(n);
    b[ai[0].second] = -1;

    for(int i=1;i < n;i++){
        if(ai[i].first == ai[i-1].first){
            b[ai[i].second] = ai[i-1].second + 1;
        }else{
            b[ai[i].second] = -1;
        }
    }

    for(int i=0;i < n;i++){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}


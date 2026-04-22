#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    long long n;
    cin >> n;
    deque<tuple<long long ,long long,int>> ac(n);
    for(int i=0;i < n;i++){
        int a,c;
        cin >> a >> c;
        ac[i] = {a,c,i+1};
    }

    sort(ac.rbegin(),ac.rend());

    int curr = 0;
    vector<int> ans;
    ans.push_back(get<2>(ac[0]));
    for(int i=1;i < n;i++){
        if(get<1>(ac[i]) < get<1>(ac[curr])){
            ans.push_back(get<2>(ac[i]));
            curr = i;
        }else{
            continue;
        }
    }

    sort(ans.begin(),ans.end());

    cout << ans.size() << endl;
    for(int i=0;i < ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}


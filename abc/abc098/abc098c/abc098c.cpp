#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<long long> prefix_sum(n+1),prefix_sum2(n+1);

    for(int i=0;i < n;i++){
        prefix_sum[i+1] = prefix_sum[i] + (s[i] == 'W' ? 1 : 0);
    }

    reverse(s.begin(),s.end());
    
    for(int i=0;i < n;i++){
        prefix_sum2[i+1] = prefix_sum2[i] + (s[i] == 'E' ? 1 : 0);
    }

    reverse(s.begin(),s.end());
    reverse(prefix_sum2.begin(),prefix_sum2.end());

    long long ans = LLONG_MAX;
    for(int i=0;i < n+1;i++){
        ans = min(ans,prefix_sum[i] + prefix_sum2[i]);
    }

    cout << ans << endl;
    return 0;
}


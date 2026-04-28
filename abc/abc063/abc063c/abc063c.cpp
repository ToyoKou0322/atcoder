#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> s(n);
    long long sum = 0;
    for(int i=0;i < n;i++){
        cin >> s[i];
        sum += s[i];
    }

    if(sum % 10 != 0){
        cout << sum << endl;
        return 0;
    }

    sort(s.begin(),s.end());

    for(int i=0;i < n;i++){
        if(s[i] % 10 != 0){
            cout << sum - s[i] << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    vector<int> march(5);
    for(int i=0;i < n;i++){
        if(s[i][0] == 'M'){
            march[0]++;
        }else if(s[i][0] == 'A'){
            march[1]++;
        }else if(s[i][0] == 'R'){
            march[2]++;
        }else if(s[i][0] == 'C'){
            march[3]++;
        }else if(s[i][0] == 'H'){
            march[4]++;
        }
    }

    long long ans = 0;
    for(int bit=0;bit < (1 << 5);bit++){
        int c = 0;
        long long x = 1;
        for(int i=0;i < 5;i++){
            if(bit & (1 << i)){
                c++;
            }
        }
        if(c == 3){
            for(int i=0;i < 5;i++){
                if(bit & (1 << i)){
                    x *= march[i];
                }
            }
            ans += x;
        }
    }

    cout << ans << endl;
    return 0;
}


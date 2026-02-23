#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> p(n);
    for(int i=0;i < n;i++){
        cin >> p[i];
    }

    vector<char> iad(n-1);

    for(int i=0;i < n-1;i++){
        if(p[i] < p[i+1]){
            iad[i] = '+';
        }else{
            iad[i] = '-';
        }
    }

    vector<pair<char,long long>> rle;
    char current = iad[0];
    long long count = 1;
    for(int i=1; i < n-1;i++){
        if(iad[i] == current){
            count++;
        }else{
            rle.push_back({current,count});
            current = iad[i];
            count = 1; 
        }
    }
    rle.push_back({current,count});

    long long ans = 0;
    if(rle.size() >= 3){
        for(int i=0;i < rle.size() - 2;i++){
            if(rle[i].first == '+' && rle[i+1].first == '-' && rle[i+2].first == '+'){
                ans += rle[i].second * rle[i+2].second;
            }
        }
    }

    cout << ans << endl;
    return 0;
}


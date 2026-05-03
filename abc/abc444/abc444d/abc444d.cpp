#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> imos(200100);
    for(int i=0;i < n;i++){
        cin >> a[i];
        imos[1]++;
        imos[a[i]+1]--;
    }

    for(int i=1;i < imos.size();i++){
        imos[i] += imos[i-1];
    }

    for(int i=1;i < imos.size()-1;i++){
        if(imos[i] >= 10){
            imos[i+1] += imos[i] / 10;
            imos[i] %= 10;
        }
    }

    string x = "";
    for(int i=1;i < imos.size();i++){
        x += to_string(imos[i]);
    }

    for(int i=x.size()-1;i >= 0;i--){
        if(x[i] == '0'){
            x.pop_back();
        }else{
            break;
        }
    }

    reverse(x.begin(),x.end());

    cout << x << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<double> a;
    for(int i=0;i < s.size();i++){
        for(int j=i+1;j < s.size();j++){
            if(s[i] == 't' && s[j] == 't' && j - i + 1 >= 3){
                double x = 0;
                for(int k=i;k <= j;k++){
                    if(s[k] == 't'){
                        x++;
                    }
                }
                double len = j-i+1;
                double y = (x-2)/(len-2);
                a.push_back(y);
            }
        }
    }

    sort(a.rbegin(),a.rend());
    if(a.size() == 0){
        cout << 0 << endl;
    }else{
        cout << fixed << setprecision(20) << a[0] << endl;
    }
    return 0;
}


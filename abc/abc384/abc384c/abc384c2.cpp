#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    vector<int> score(5);
    for(int i=0;i < 5;i++){
        cin >> score[i];
    }

    string t = "ABCDE";
    set<pair<int,string>> s;

    for(int bit=1;bit < (1 << 5);bit++){
        int current_score = 0;
        string name = "";

        for(int i=0;i < 5;i++){
            if(bit & (1 << i)){
                current_score += score[i];
                name += t[i];
            }
        }

        s.insert({-current_score,name});
    }

    for(auto x : s){
        cout << x.second << endl;
    }
    return 0;
}


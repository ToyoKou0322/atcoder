#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    vector<pair<char,int>> rle_s,rle_t;

    char curr = s[0];
    int c = 0;
    for(int i=0;i < s.size();i++){
        if(s[i] == curr){
            c++;
        }else{
            rle_s.push_back({curr,c});
            curr = s[i];
            c = 1;
        }
    }
    rle_s.push_back({curr,c});

    curr = t[0];
    c = 0;
    for(int i=0;i < t.size();i++){
        if(t[i] == curr){
            c++;
        }else{
            rle_t.push_back({curr,c});
            curr = t[i];
            c = 1;
        }
    }
    rle_t.push_back({curr,c});

    if(rle_s.size() != rle_t.size()){
        cout << "No" << endl;
        return 0;
    }

    for(int i=0;i < rle_s.size();i++){
        if(rle_s[i].first != rle_t[i].first){
            cout << "No" << endl;
            return 0;
        }

        if(rle_s[i].second < rle_t[i].second && rle_s[i].second == 1){
            cout << "No" << endl;
            return 0;
        }

        if(rle_s[i].second > rle_t[i].second){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}


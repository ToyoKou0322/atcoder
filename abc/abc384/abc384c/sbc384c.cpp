#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    vector<int> score(5);
    int sum = 0;
    for(int i=0;i < 5;i++){
        cin >> score[i];
        sum += score[i];
    }

    string t = "ABCDE";
    set<pair<int,string>> s;

    for(int i=0;i < t.size();i++){
        string x = "";
        x += t[i];
        int y = score[i];
        s.insert({-1 * y,x});
    }

    for(int i=0;i < t.size();i++){
        for(int j=i+1;j < t.size();j++){
            string x = "";
            x += t[i];
            x += t[j];
            int y = score[i] + score[j];
            s.insert({-1 * y,x});
        }
    }

    for(int i=0;i < t.size();i++){
        for(int j=i+1;j < t.size();j++){
            for(int k=j+1;k < t.size();k++){
                string x = "";
                x += t[i];
                x += t[j];
                x += t[k];
                int y = score[i] + score[j] + score[k];
                s.insert({-1 * y,x});
            }
        }
    }

    
    for(int i=0;i < t.size();i++){
        for(int j=i+1;j < t.size();j++){
            for(int k=j+1;k < t.size();k++){
                for(int l=k+1;l < t.size();l++){
                    string x = "";
                    x += t[i];
                    x += t[j];
                    x += t[k];
                    x += t[l];
                    int y = score[i] + score[j] + score[k] + score[l];
                    s.insert({-1 * y,x});
                }
            }
        }
    }

    s.insert({-1 * sum,"ABCDE"});

    for(auto x : s){
        cout << x.second << endl;
    }
}

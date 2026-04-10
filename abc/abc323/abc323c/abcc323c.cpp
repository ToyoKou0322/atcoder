#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> a(m);
    for(int i=0;i < m;i++){
        int x;
        cin >> x;
        a[i] = {x,i};
    }
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    vector<int> score(n,0);
    int maxscore = 0;
    for(int i=0;i < n;i++){
        score[i] += i+1;
        for(int j=0;j < m;j++){
            if(s[i][j] == 'o'){
                score[i] += a[j].first;
            }
        }
        maxscore = max(maxscore,score[i]);
    }

    sort(a.rbegin(),a.rend());

    for(int i=0;i < n;i++){
        if(score[i] == maxscore){
            cout << 0 << endl;
            continue;
        }

        int tmp = 0;
        int c = 0;
        for(int j=0;j < m;j++){
            if(s[i][a[j].second] == 'o'){
                continue;
            }else{
                tmp += a[j].first;
                c++;
            }
            if(tmp + score[i] > maxscore){
                cout << c << endl;
                break;
            }
        }
    }
    return 0;
}


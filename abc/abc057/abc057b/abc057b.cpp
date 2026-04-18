#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> ab(n);
    vector<pair<int,int>> cd(m);
    for(int i=0;i < n;i++){
        cin >> ab[i].first >> ab[i].second;
    }
    for(int i=0;i < m;i++){
        cin >> cd[i].first >> cd[i].second;
    }

    for(int i=0;i < n;i++){
        int d = INT_MAX;
        for(int j=0;j < m;j++){
            int x = abs(ab[i].first - cd[j].first);
            int y = abs(ab[i].second - cd[j].second);
            d = min(x + y,d);
        }

        for(int j=0;j < m;j++){
            int x = abs(ab[i].first - cd[j].first);
            int y = abs(ab[i].second - cd[j].second);
            if(x + y == d){
                cout << j+1 << endl;
                break;
            }
        }
    }
    return 0;
}


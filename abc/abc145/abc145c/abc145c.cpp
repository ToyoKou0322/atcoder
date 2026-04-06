#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;
int n;
vector<pair<long double,long double>> xy;
vector<vector<bool>> seen;
long double sum = 0;
vector<long double> m;
int c = 1;

void dfs(int x,int y){
    seen[x][y] = true;
    for(int i=0;i < n;i++){
        int a = xy[i].first;
        int b = xy[i].second;
        if(!seen[a][b]){
            c++;
            sum += sqrt(pow(x-a,2)+pow(y-b,2));
            dfs(a,b);
            c--;
            sum -= sqrt(pow(x-a,2)+pow(y-b,2));
        }
    }

    if(c == n){
        m.push_back(sum);
    }
    seen[x][y] = false;
}

int main(){
    cin >> n;
    xy.resize(n);
    for(int i=0;i < n;i++){
        int x,y;
        cin >> x >> y;
        x += 1000;
        y += 1000;
        xy[i].first = x;
        xy[i].second = y;
    }

    seen.assign(3000,vector<bool>(3000,false));
    for(int i=0;i < n;i++){
        dfs(xy[i].first,xy[i].second);
    }
    long double s = 0;
    for(int i=0;i < m.size();i++){
        s += m[i];
    }

    long double ans = s / m.size();
    cout << fixed << setprecision(20) << ans << endl;
}


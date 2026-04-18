#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

//途中

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,a,b;
        cin >> n >> a >> b;

        if(n % 2 == 1){
            cout << "No" << endl;
            continue;
        }else{
            cout << "Yes" << endl;
        }

        queue<pair<int,int>> q;
        q.push({1,1});

        vector<int> dx = {-1,1,0,0};
        vector<int> dy = {0,0,-1,1};
        vector<vector<int>> dist(n+2,vector<int>(n+2,-1));
        dist[1][1] = 0;

        string houkou = "UDLR";

        string r = string(n-1,'R');
        string l = string(n-1,'L');
        string ans = "";
        bool right = true;
        for(int i=1;i <= n;i++){
            if(i == a){
                if(right){
                    ans += string(b-2,'R') + 'D';
                }else{
                    ans += string(n-b-1,'L') + 'D';
                }
            }else{
                if(i == a + 1){
                    if(right){

                    }else{

                    }
                }else{

                }
            }
        }
    }
}


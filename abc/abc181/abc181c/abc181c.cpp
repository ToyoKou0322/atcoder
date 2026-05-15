#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long cross_product(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3){
    long long dx1 = x2 - x1;
    long long dy1 = y2 - y1;
    long long dx2 = x3 - x2;
    long long dy2 = y3 - y2;

    return dx1 * dy2 - dy1 * dx2;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> xy(n);
    for(int i=0;i < n;i++){
        cin >> xy[i].first >> xy[i].second;
    }

    for(int i=0;i < n;i++){
        for(int j=i+1;j < n;j++){
            for(int k=j+1;k < n;k++){
                if(cross_product(xy[i].first,xy[i].second,xy[j].first,xy[j].second,xy[k].first,xy[k].second) == 0){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    long long h,w,n;
    cin >> h >> w >> n;
    vector<long long> a(n),b(n);
    vector<long long> row,col;
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
        row.push_back(a[i]);
        col.push_back(b[i]);
    }

    sort(row.begin(),row.end());
    sort(col.begin(),col.end());

    row.erase(std::unique(row.begin(),row.end()),row.end());
    col.erase(std::unique(col.begin(),col.end()),col.end());

    for(int i=0;i < n;i++){
        long long row_index = lower_bound(row.begin(),row.end(),a[i]) - row.begin();
        long long col_index = lower_bound(col.begin(),col.end(),b[i]) - col.begin();

        cout << row_index + 1 << " " << col_index + 1 << endl;
    }
    return 0;
}


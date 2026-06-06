#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<int> &A,int K, const vector<int> &R, int sum){
    if(A.size() == R.size()){
        if(sum % K == 0){
            for(int i=0;i < A.size();i++) cout << A[i] << " ";
            cout << endl;
        }
        return;
    }

    for(int v = 1;v <= R[A.size()];v++){
        A.push_back(v);
        dfs(A,K,R,sum + v);
        A.pop_back();
    }
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> r(n);
    for(int i=0;i < n;i++){
        cin >> r[i];
    }

    vector<int> A;
    dfs(A,k,r,0);

    return 0;
}


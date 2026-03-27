#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,m;

void dfs(vector<int>& current_seq,int last_num){
    if(current_seq.size() == n){
        for(int i=0;i < n;i++){
            cout << current_seq[i] << (i == n-1 ? "" : " ");
        }
        cout << "\n";
        return;
    }

    for(int i=last_num + 1;i <= m;i++){
        current_seq.push_back(i);
        dfs(current_seq,i);
        current_seq.pop_back();
    }
}

int main(){
    cin >> n >> m;
    vector<int> current_seq;

    dfs(current_seq, 0);

    return 0;
}


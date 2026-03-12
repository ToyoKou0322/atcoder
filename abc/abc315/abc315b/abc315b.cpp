#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int m;
    cin >> m;
    vector<int> d(m);
    for(int i=0;i < m;i++){
        cin >> d[i];
    }

    int sum = 0;
    for(int i=0;i < m;i++){
        sum += d[i];
    }

    int count = 0;
    int target = (sum + 1) / 2;
    for(int i=0;i < m;i++){
        for(int j=1;j <= d[i];j++){
            count++;
            if(count == target){
                cout << i+1 << " " << j << endl;
                return 0;
            }
        }
    }
}


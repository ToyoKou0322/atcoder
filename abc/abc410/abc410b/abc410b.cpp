#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> x(q);
    for(int i=0;i < q;i++){
        cin >> x[i];
    }

    vector<int> box(n,0);
    for(int i=0;i < q;i++){
        if(x[i] >= 1){
            cout << x[i] << " ";
            box[x[i]-1]++;
        }else{
            int few = INT_MAX;
            for(int j=0;j < n;j++){
                few = min(few,box[j]);
            }
            for(int j=0;j < n;j++){
                if(box[j] == few){
                    cout << j+1 << " ";
                    box[j]++;
                    break;
                }
            }
        }
    }
    return 0;
}


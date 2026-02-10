#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    for(int i=0;i < n;i++){
        int taller = -1;
        for(int j=0;j < i;j++){
            if(a[j] > a[i]){
                taller = max(taller,j+1);
            }
        }
        cout << taller << endl;
    }

    return 0;
}


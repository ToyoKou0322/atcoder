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

    vector<int> b(n+1,0);
    for(int i=0;i < n;i++){
        if(a[i] != -1){
            b[a[i]]++;
        }
    }

    for(int i=1;i <= n;i++){
        if(b[i] > 1){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    for(int i=0;i < n;i++){
        if(a[i] == -1){
            for(int j=1;j <= n;j++){
                if(b[j] == 0){
                    cout << j << " ";
                    b[j]++;
                    break;
                }
            }
        }else{
            cout << a[i] << " ";
        }
    }

    return 0;

}


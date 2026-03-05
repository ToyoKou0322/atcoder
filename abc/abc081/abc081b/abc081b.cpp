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

    int count = 0;
    while(true){
        bool ok = true;
        for(int i=0;i < n;i++){
            if(a[i] % 2 != 0){
                ok = false;
            }
        }
        if(!ok){
            break;
        }
        count++;
        for(int i=0;i < n;i++){
            a[i] /= 2;
        }
    }

    cout << count << endl;
    return 0;
}


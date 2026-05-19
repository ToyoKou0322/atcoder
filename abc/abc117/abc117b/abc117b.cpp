#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> l(n);
    for(int i=0;i < n;i++){
        cin >> l[i];
    }

    sort(l.begin(),l.end());

    int sum = 0;
    for(int i=0;i < n-1;i++){
        sum += l[i];
    }

    if(l.back() < sum){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}


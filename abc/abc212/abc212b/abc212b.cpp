#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string x;
    cin >> x;
    
    bool same = true;
    for(int i=1;i < x.size();i++){
        if(x[0] != x[i]){
            same = false;
        }
    }
    if(same){
        cout << "Weak" << endl;
        return 0;
    }

    bool next = true;
    for(int i=1;i < x.size();i++){
        if((x[i] % 10) != ((x[i-1] + 1) % 10)){
            next = false;
        }
    }
    if(next){
        cout << "Weak" << endl;
        return 0;
    }

    cout << "Strong" << endl;
    return 0;
}


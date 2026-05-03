#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;

    sort(s.begin(),s.end());
    int c = 0;

    do{
        c++;
        if(c == k){
            cout << s << endl;
            return 0;
        }
    }while(next_permutation(s.begin(),s.end()));
}


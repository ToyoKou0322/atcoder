#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = n - s.size();

    for(int i=0;i < a;i++){
        s = 'o' + s;
    }

    cout << s << endl;
}


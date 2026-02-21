#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   string s;
   cin >> s;
   s[0] = tolower(s[0]);
   string ans = "Of";
   ans += s;
   cout << ans << endl;
   return 0;
}


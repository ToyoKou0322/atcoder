#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   string s;
   cin >> s;

   if(s[0] == s.back()){
       cout << "Yes" << endl;
   }else{
        cout << "No" << endl;
   }
}


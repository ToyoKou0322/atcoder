#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   string s;
   cin >> s;

   bool zero = true;
   for(int i=s.size()-1;i >= 0;i--){
        if(s[i] != '0'){
            zero = false;
        }else if(s[i] == '0' && zero){
            s.pop_back();
        }
   }

   if(s.back() == '.'){
        s.pop_back();
   }

   cout << s << endl;
   return 0;
}


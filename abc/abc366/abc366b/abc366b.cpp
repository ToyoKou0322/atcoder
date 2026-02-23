#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   int n;
   cin >> n;
   vector<string> s(n);
   int m = 0;
   for(int i=0;i < n;i++){
        cin >> s[i];
        int size = s[i].size();
        m = max(m,size);
   }

   vector<string> t(m);
   for(int i=0;i < m;i++){
       string x = "";
       for(int j=0;j < n;j++){
           int size = s[n-1-j].size()-1;
           if(i > size){
               x += '*';
           }else{
               x += s[n-1-j][i];
           }
       }
       t[i] = x;
   }

   for(int i=0;i < m;i++){
       while(t[i].size() > 0 && t[i].back() == '*'){
           t[i].pop_back();
       }
   }

   for(auto x:t){
        cout << x << endl;
   }
   return 0;
}


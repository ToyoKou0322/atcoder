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

   vector<int> ans(n,0);
   for(int i=n-1;i >= 0;i--){
        if(a[i] == i+1){
            ans[i] = i+1;
        }else{
            ans[i] = ans[a[i]-1];
        }
   }

   for(int i=0;i < n;i++){
        cout << ans[i] << " ";
   }
   return 0;
}



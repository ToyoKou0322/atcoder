#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   long long n,m;
   cin >> n >> m;
   vector<long long> c(m);
   for(int i=0;i < m;i++){
        cin >> c[i];
   }
   vector<long long> a(n),b(n);
   for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
   }

   long long ans = 0;
   for(int i=0;i < n;i++){
       if(c[a[i]-1] >= b[i]){
            ans += b[i];
            c[a[i]-1] -= b[i];
       }else{
            ans += c[a[i]-1];
            c[a[i]-1] = 0;
       }
   }

   cout << ans << endl;
   return 0;
}


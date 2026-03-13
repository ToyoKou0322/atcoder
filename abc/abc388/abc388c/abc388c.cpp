#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   int n;
   cin >> n;
   vector<long long> a(n);
   for(int i=0;i < n;i++){
        cin >> a[i];
   }

   long long ans = 0;
   for(int i=0;i < n;i++){
        long long target = a[i] * 2;
        auto it = lower_bound(a.begin(),a.end(),target);
        if(it == a.end()){
            continue;
        }

        long long x = distance(a.begin(),it);
        ans += n - x;
   }

   cout << ans << endl;
   return 0;
}


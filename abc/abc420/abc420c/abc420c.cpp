#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   long long n,q;
   cin >> n >> q;
   vector<long long> a(n),b(n);
   for(int i=0;i < n;i++){
        cin >> a[i];
   }
   for(int i=0;i < n;i++){
        cin >> b[i];
   }

   long long sum = 0;
   for(int i=0;i < n;i++){
        sum += min(a[i],b[i]);
   }

   for(int i=0;i < q;i++){
        char c;
        long long x,v;
        cin >> c >> x >> v;
        
        if(c == 'A'){
            sum -= min(a[x-1],b[x-1]);
            a[x-1] = v;
            sum += min(a[x-1],b[x-1]);
        }else if(c == 'B'){ 
            sum -= min(a[x-1],b[x-1]);
            b[x-1] = v;
            sum += min(a[x-1],b[x-1]);
        }

        cout << sum << endl;
   }
}


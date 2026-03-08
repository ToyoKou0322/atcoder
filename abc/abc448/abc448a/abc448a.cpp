#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   int n,x;
   cin >> n >> x;
   vector<int> a(n);
   for(int i=0;i < n;i++){
        cin >> a[i];
   }

   for(int i=0;i < n;i++){
        if(a[i] < x){
            x = a[i];
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
   }
}


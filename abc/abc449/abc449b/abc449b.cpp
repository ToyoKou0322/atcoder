#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   int h,w,q;
   cin >> h >> w >> q;

   while(q--){
       int num;
       cin >> num;
       if(num == 1){
           int r;
           cin >> r;
           cout << r * w << endl;
           h -= r;
       }else if(num == 2){
           int c;
           cin >> c;
           cout << c * h << endl;
           w -= c;
       }
   }
}


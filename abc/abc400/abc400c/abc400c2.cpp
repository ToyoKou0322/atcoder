#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long count1 = sqrtl(n / 2);
    while((count1 + 1) * (count1 + 1) <= n / 2){
        count1++;
    }

    while(count1 * count1 > n / 2){
        count1--;
    }

    long long count2 = sqrtl(n / 4);
    while((count2 + 1) * (count2 + 1) <= n / 4){
        count2++;
    }
    while(count2 * count2 > n / 4){
        count2--;
    }

    cout << count1 + count2 << endl;
    return 0;
}


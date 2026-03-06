#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void func(long long n,long long cur,int use, long long &counter){
    if(cur > n){
        return;
    }
    if(use == 0b111){
        counter++;
    }

    //7を付け加える
    func(n, cur * 10 + 7, use | 0b001, counter);

    //5を付け加える
    func(n, cur * 10 + 5, use | 0b010, counter);

    //3を付け加える
    func(n, cur * 10 + 3, use | 0b100, counter);
}

int main(){
    long long n;
    cin >> n;
    long long counter = 0;
    func(n, 0, 0, counter);
    cout << counter << endl;
    return 0;
}

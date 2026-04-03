#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person {
    long long a;
    long long b;
    int id;
};

int main(){
    int n;
    cin >> n;
    vector<Person> p(n);
    for(int i=0;i < n;i++){
        cin >> p[i].a >> p[i].b;
        p[i].id = i + 1;
    }

    sort(p.begin(),p.end(),[](const auto& x, const auto& y){
            long long left = x.a * y.b;
            long long right = y.a * x.b;

            if(left != right){
                return left > right;
            }
            return x.id < y.id;
    });

    for(int i=0;i < n;i++){
        cout << p[i].id << " ";
    }
    cout << endl;
    return 0;
}


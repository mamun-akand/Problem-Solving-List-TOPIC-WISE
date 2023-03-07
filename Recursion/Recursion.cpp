#include<bits/stdc++.h>
using namespace std;

void func(int n){
    if(n==0) return;             /// base function

//    cout << n << endl;
    func(n-1);                  /// recursive function
    cout << n << endl;
    cout << "Mamun" << endl;
    cout << 100+5 << endl;
}

int main(){
    func(5);
}

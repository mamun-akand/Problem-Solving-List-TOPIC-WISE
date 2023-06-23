#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0 || n==1)
        return n;
    else
        return fibo(n-1) + fibo(n-2);
}

int main(){
    ///n-th fibonacci number

    int num = 6;
    cout << fibo(num) << endl;
}

// TC: O(2^n) m is level in recursion tree. [O(2^n) Exponentian TC]

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// 1 2 3 4 5 6 7  8 ... serial
// 0 1 1 2 3 5 8 13 ...

ll fibo(ll n){
   if(n==1) return 0;
   if(n==2) return 1;
   
   return fibo(n-1) + fibo(n-2);
}

int main(){
   ll n=5;
   cout << fibo(n) << endl;
}

// TC: O(2^n) m is level in recursion tree. [O(2^n) Exponentian TC]
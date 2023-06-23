#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll memo[100+1];

ll fibo(ll n){
   if(n==1) return 0;
   if(n==2) return 1;
   
   if(memo[n] != -1) return memo[n];
   
   memo[n] = fibo(n-1) + fibo(n-2); 
   return memo[n];
}

int main(){
   ll n=100;
   memset(memo, -1, sizeof(memo));
   
   cout << fibo(n) << endl;
}





// TC: O(n)       //O(2^n) theke O(n) e converted.
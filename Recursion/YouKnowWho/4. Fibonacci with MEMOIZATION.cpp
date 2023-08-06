#include<bits/stdc++.h>
using namespace std;

int memo[100];

int fibo(int n){
   //base case
   if(n==0 || n==1) return n;
   
   //memo check
   if(memo[n] != -1){
      return memo[n];
   }
   
   //set in memo, then return
   return memo[n] = fibo(n-1) + fibo(n-2);
}

int main(){
   int n = 7;
   for(int i=0; i<=n; i++){
      memo[i] = -1;
   }
   cout << fibo(n) << endl;
}
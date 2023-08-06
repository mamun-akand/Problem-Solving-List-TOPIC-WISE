#include<bits/stdc++.h>
using namespace std;

int memo[100];

int fibo(int n){
   //base case
   if(n==0 || n==1) return n;
   
   return fibo(n-1) + fibo(n-2);
}

int main(){
   int n = 7;
   cout << fibo(n) << endl;
}
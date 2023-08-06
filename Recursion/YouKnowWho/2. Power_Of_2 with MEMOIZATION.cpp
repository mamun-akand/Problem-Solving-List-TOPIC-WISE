#include<bits/stdc++.h>
using namespace std;

int memo[100];

int power_of_2(int n){
   if(n==0) return 1;
   
   if(memo[n] != -1){
      return memo[n]; //memo check
   }
   
   memo[n] = power_of_2(n-1) + power_of_2(n-1); //set in memo
   return memo[n];
   // return power_of_2(n-1) * 2;
}

int main(){
   int n = 5;
   for(int i=0; i<=n; i++){
      memo[i] = -1;
   }
   cout << power_of_2(n) << endl;
}

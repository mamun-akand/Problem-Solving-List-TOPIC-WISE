#include<bits/stdc++.h>
using namespace std;
#define ll long long

void pattern_print(ll n){
   if(n==1){
      cout << 1 << endl;
      return;
   }
   
   for(ll i=1; i<=n; i++){
      cout << i << " ";
   }
   cout << endl;
   
   pattern_print(n-1);
   
   for(ll i=1; i<=n; i++){
      cout << i << " ";
   }
   cout << endl;
}

int main(){
   ll n=6;
   pattern_print(n);
}

// Time Complexity:
// 1. Number of function calls         --> n
// 2. Time complexity of each function --> O(n)
// Final TC: n * O(n) = O(n^2)
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void pattern_print(ll n){
   if(n==0) return;
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
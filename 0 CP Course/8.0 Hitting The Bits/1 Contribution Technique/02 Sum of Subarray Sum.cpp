#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  
   ll n; cin>>n;
   int ara[n+1];
   for(ll i=1; i<=n; i++){
   	cin>>ara[i];
   }
   
   ll ans=0;
     
   // contribution method, efficient: O(n)
   // contribution: i*(n-i+1)

   for(ll i=1; i<=n; i++){
   	ans += ara[i] * (i*(n-i+1));
   }
   cout << ans << endl;
   
}






















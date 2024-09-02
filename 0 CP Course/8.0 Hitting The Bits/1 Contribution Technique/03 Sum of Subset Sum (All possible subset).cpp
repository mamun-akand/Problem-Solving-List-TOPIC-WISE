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
   
   //contribution method, efficient: O(n)
   //Contribution of every element: 2^n - 2^(n-1) = 2^(n-1) 
   
   ll contribution = pow(2, n-1);
   for(ll i=1; i<=n; i++){
   	ans += ara[i] * contribution;
   }
   cout << ans << endl;
}






















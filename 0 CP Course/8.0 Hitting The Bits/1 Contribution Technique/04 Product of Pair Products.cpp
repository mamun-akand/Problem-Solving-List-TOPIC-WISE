#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){   
   ll n; cin>>n;
   int ara[n+1];
   for(ll i=1; i<=n; i++){
   	cin>>ara[i];
   }
   
   ll ans=1;
   
   //contribution method, efficient: O(n)
   //Contribution of every element : 2*n times
   //So Every element contribution product : (a[i]^2*n) 
   
   for(ll i=1; i<=n; i++){
   	ans *= pow(ara[i], 2*n); // ara[i] value is present 2*n times
   }
   cout << ans << endl; 
}






















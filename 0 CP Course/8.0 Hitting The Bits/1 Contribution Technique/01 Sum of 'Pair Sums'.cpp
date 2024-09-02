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
   
   // // bruteforce, tc : O(n^2)
   // for(ll i=1; i<=n; i++){
   	// for(ll j=1; j<=n; j++){
   		// ans += (ara[i] + ara[j]);
   		// cout << ara[i] << "+" << ara[j] << endl;
   	// }
   // }
   
   //contribution method, efficient: O(n)
   for(ll i=1; i<=n; i++){
   	ans += 2*n * ara[i]; // ara[i] value is present 2*n times
   }
   cout << ans << endl; 
}






















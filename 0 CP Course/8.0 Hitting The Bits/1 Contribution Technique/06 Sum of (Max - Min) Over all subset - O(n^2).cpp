#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
   ll n; cin>>n;
   ll ara[n+1];
   for(ll i=1; i<=n; i++){
   	cin>>ara[i];
   }
   ll ans=0;
   // contribution method, efficient: O(n^2)
   // contribution: 2^(j-i-1) gulo, proti ta max and min er bhitore 
   sort(ara+1, ara+n+1);
   for(ll i=1; i<=n; i++){
		for(ll j=i+1; j<=n; j++){
			ans += (ara[j]-ara[i]) * (1<<(j-i-1)); //2^(j-i-1) = (1<<(j-i-1))
		}
   }
   cout << ans << endl;
}






















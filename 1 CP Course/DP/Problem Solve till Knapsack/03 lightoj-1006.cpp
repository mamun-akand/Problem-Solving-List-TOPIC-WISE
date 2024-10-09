// URL: https://vjudge.net/problem/lightoj-1006
#include<bits/stdc++.h>
using namespace std;
#define	ll	int

const ll N = 1e4+7, mod = 10000007; 
ll dp[N];
ll a, b, c, d, e, f;

ll ways(ll n){
	if (n == 0) return a%mod;
    if (n == 1) return b%mod;
    if (n == 2) return c%mod;
    if (n == 3) return d%mod;
    if (n == 4) return e%mod;
    if (n == 5) return f%mod;
	
	if(dp[n] != -1) return dp[n];
	
	ll ans = 0;
	for(ll i=1; i<=6; i++){
		ans += ways(n-i);
		ans %= mod;
	}
	return dp[n] = ans;
}

int main(){
	ll t, cs=0; cin>>t;
	while(t--){
		cs++;
		memset(dp, -1, sizeof(dp));
		ll n;
		cin>>a>>b>>c>>d>>e>>f>>n;
		cout << "Case " << cs << ": "<< ways(n) << endl;		
	}
}






















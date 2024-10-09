// URL: https://vjudge.net/problem/cses-1633
#include<bits/stdc++.h>
using namespace std;
#define	ll	long long int

const ll N = 1e6+7, mod = 1e9+7;
ll dp[N];

ll ways(ll n){
	if(n==0) return 1;
	
	if(dp[n] != -1) return dp[n];
	
	ll ans = 0;
	for(ll i=1; i<=6; i++){
		if(n-i >= 0){
			ans += ways(n-i);
			ans %= mod;
		}
	}
	return dp[n] = ans;
}

int main(){
	memset(dp, -1, sizeof(dp));
	ll n; cin>>n;
	cout << ways(n) << endl;
}






















// https://atcoder.jp/contests/abc293/tasks/abc293_e?lang=en
// URL: https://vjudge.net/problem/AtCoder-abc293_e
#include<bits/stdc++.h>
using namespace std;
#define	ll long long int
ll binary_exp(ll x, ll n, ll mod){
	x = x % mod;
	ll ans=1%mod;
	while(n > 0){
		if(n & 1){
			ans = ans*x%mod;	
		}
		x = x*x%mod;
		n = n>>1;
	} return ans;
}
ll solve(ll a, ll xx, ll m){
	if(xx == 0){
		return 1%m;
	}
	if(xx & 1){
		ll mid = xx/2;
		ll curr = solve(a, mid, m);
		ll ans = (curr + binary_exp(a, mid+1, m) * curr % m)%m;
		return ans;
	}else{
		ll ans = (solve(a, xx-1, m) + binary_exp(a, xx, m))%m;
		return ans;
	}
}
int main(){
	ll a, x, m; cin>>a>>x>>m;
	cout << solve(a, x-1, m) << endl;
}






















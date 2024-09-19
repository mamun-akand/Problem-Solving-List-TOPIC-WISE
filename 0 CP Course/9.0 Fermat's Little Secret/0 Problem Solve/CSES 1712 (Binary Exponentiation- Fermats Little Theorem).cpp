// URL: https://cses.fi/problemset/task/1712
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
//Fermat's Little Theorem
//a^n % p = a^(n%(p-1))%p	; where p = prime

ll binary_exp(ll x, ll n, ll mod){
	x = x % mod; //x^(2^0)
	ll ans=1%mod;
	while(n > 0){
		if(n & 1){
			ans = ans*x%mod;	
		}
		x = x*x%mod;
		n = n>>1;
	} return ans;
}

int main(){
	ll q; cin>>q;
	while(q--){
		ll p = 1e9+7;
		ll a, b, c; cin>>a>>b>>c;
		ll exp = binary_exp(b, c, p-1);
		ll ans = binary_exp(a, exp, p);
		cout << ans << endl;
	}
}












































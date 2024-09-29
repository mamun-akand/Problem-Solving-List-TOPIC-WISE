#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll N = 1e6+7, mod = 1e9+7;
ll fact[N], inverse_fact[N];

ll binary_exp(ll x, ll n, ll mod){ //log n
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
ll multi_inverse(ll a, ll mod){
	return binary_exp(a, mod-2, mod); //a^(m-2)%m = 1/a;
}
void prec(){
	fact[0] = 1;
	for(ll i=1; i<N; i++){
		fact[i] = fact[i-1] * i % mod;
	}
	for(ll i=1; i<N; i++){
		inverse_fact[i] = multi_inverse(fact[i], mod);
	}
}

ll nCr(ll n, ll r){
	return fact[n] * inverse_fact[r] % mod * inverse_fact[n-r] % mod;
}
ll nPr(ll n, ll r){
	return fact[n] * inverse_fact[n-r] % mod;
}

int main(){
	prec();
	
	ll q; cin>>q;
	while(q--){
		ll n, r; cin>>n>>r;
		cout << nCr(n, r) << " " << nPr(n, r) << endl;
	}
}






















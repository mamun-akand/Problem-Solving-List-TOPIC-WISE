// https://lightoj.com/problem/combinations
// URL: https://vjudge.net/problem/LightOJ-1067
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e6+2, mod = 1000003;
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
	inverse_fact[N-1] = multi_inverse(fact[N-1], mod);
	for(ll i=N-2; i>=0; i--){
		inverse_fact[i] = inverse_fact[i+1]*(i+1)%mod; //cause, 1/(n!)=1/((n+1)!)*(n+1)
	}
}
ll nCr(ll n, ll r){
	if(n<0 or n<r) return 0;
	else return fact[n] * inverse_fact[r] % mod * inverse_fact[n-r] % mod;
}
int main(){
	prec();
	ll q; cin>>q;
	ll cs = 0;
	while(q--){
		ll n, r; cin>>n>>r;
		cout << "Case " << ++cs << ": ";
		cout << nCr(n, r) << endl;
	}
}












































#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// a/b % m = a*(1/b) % m; where 1/b is multiplicative inverse
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
ll multipli_inverse(ll a, ll m){
	return binary_exp(a, m-2, m);
}
int main(){
	ll a, b, mod; cin>>a>>b>>mod;
	cout<< a * multipli_inverse(b, mod)%mod <<endl;	
}












































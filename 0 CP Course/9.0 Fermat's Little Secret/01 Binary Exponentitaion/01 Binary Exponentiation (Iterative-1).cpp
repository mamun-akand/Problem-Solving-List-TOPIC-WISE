#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll binary_exp(int x, ll n, int mod){
	vector<ll> v(61, 0);
	v[0] = x % mod; //x^(2^0)
	for(ll k=1; k<=60; k++){
		v[k] = v[k-1]*v[k-1]%mod; //x^(2^(k-1))*x^(2^(k-1))
	}
	ll ans=1%mod;
	for(ll k=0; k<=60; k++){
		if((n>>k) & 1) ans = ans*v[k]%mod;
	}
	return ans;
}
int main(){
	int x = 1e8 + 9; ll n = 1e18; int mod = 1e9 + 7;
	cout << binary_exp(x, n, mod) << endl;
}






















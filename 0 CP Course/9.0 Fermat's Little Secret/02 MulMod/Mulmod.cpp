#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll mulMod(ll x, ll n, ll mod){
	x = x % mod; //x^(2^0)
	ll ans = 0;
	while(n > 0){
		if(n & 1){
			ans = (ans+x)%mod;	
		}
		x = (x+x)%mod;
		n = n>>1;
	}
	return ans;
}
int main(){
	ll mod = (ll)1e18 + 7;
	ll x = 1e18, y = 1e18; 
	cout << mulMod(x, y, mod) << endl;
}






















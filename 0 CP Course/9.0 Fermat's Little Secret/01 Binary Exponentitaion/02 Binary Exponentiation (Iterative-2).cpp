#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll binary_exp(ll x, ll n, ll mod){
	x = x % mod; //x^(2^0)
	ll ans=1%mod;
	while(n > 0){
		if(n & 1){
			ans = ans*x%mod;	
		}
		x = x*x%mod;
		n = n>>2;
	} return ans;
}
int main(){
	int x = 1e8 + 9; ll n = 1e18; int mod = 1e9 + 7;
	cout << binary_exp(x, n, mod) << endl;
}






















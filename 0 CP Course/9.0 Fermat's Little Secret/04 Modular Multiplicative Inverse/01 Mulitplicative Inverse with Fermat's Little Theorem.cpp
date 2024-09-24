#include<bits/stdc++.h>
using namespace std;
using ll = long long;
//Fermat's Little Theorem
//a^(p-1) % p = 1; where p = prime
//a^(p-2) % p = 1/a; dividing both side with a, so got inverse

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

ll inverse(ll a, ll m){
	return binary_exp(a, m-2, m);
}

int main(){
	ll mod = 1e9+7;
	ll a; cin>>a;
	cout << inverse(a, mod) << endl;	
}












































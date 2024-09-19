#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll binary_exp(int x, ll n, int mod){
	if(n==0) return 1 % mod;
	if(n%2==0){
		ll curr = binary_exp(x, n/2, mod);
		return curr * curr % mod;
	}else{
		ll curr = binary_exp(x, n/2, mod);
		return curr * curr % mod * x % mod;
	}
}
int main(){
	int x = 1e8 + 9; ll n = 1e18; int mod = 1e9 + 7;
	cout << binary_exp(x, n, mod) << endl;
}






















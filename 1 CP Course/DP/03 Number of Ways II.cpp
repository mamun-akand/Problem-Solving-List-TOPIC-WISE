#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9+7;
const ll N = 1e5+9;
ll dp[N];

ll waysOfSum(ll n){
	if(n == 0) return 1;
	
	if(dp[n] != -1) return dp[n];
	
	ll ans = 0;
	for(ll i=1; i<=n; i++){
		ans += waysOfSum(n-i);
		ans %= mod;
	}
	return dp[n] = ans;
}

int main(){
	memset(dp, -1, sizeof(dp));
	ll n; cin>>n;
	cout << waysOfSum(n) << endl;
}






















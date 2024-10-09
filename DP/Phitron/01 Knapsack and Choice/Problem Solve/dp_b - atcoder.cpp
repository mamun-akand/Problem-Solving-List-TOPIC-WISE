#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5+7;
ll h[N];
ll n, k;
ll dp[N];

ll min_cost(ll n){
	if(n==1) return 0;
	
	if(dp[n] != -1) return dp[n];
	
	ll ans = LLONG_MAX;
	for(ll i=1; i<=k; i++){
		if(n-i >= 1){
			ll choice1 = abs(h[n] - h[n-i]) + min_cost(n-i);
			ans = min(ans, choice1);
		}
	}
	return dp[n] = ans;
}

int main(){
	memset(dp, -1, sizeof(dp));
	cin>>n>>k;
	for(ll i=1; i<=n; i++){
		cin>>h[i];
	}
	cout << min_cost(n) << endl;
}






















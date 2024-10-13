// URL: https://vjudge.net/problem/atcoder-dp_e
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll inf = 1e11+7;
const ll N = 100+5;
ll w[N], v[N], dp[N][N*1000];

ll knapsack(ll n, ll total_val){
	if(n==0){
		if(total_val == 0){
			return 0;
		}else{
			return inf;
		}
	}
	
	if(dp[n][total_val] != -1) return dp[n][total_val];
	
	ll ans = inf;
	if(total_val-v[n] >= 0){
		ll choice1 = w[n] + knapsack(n-1, total_val-v[n]);
		ans = min(ans, choice1);
	}
	ll choice2 = knapsack(n-1, total_val);
	ans = min(ans, choice2);
	
	return dp[n][total_val] = ans;
}

int main(){
	memset(dp, -1, sizeof(dp));
	ll n, bag; cin>>n>>bag;
	for(ll i=1; i<=n; i++){
		cin>>w[i]>>v[i];
	}
	ll ans=0;
	for(ll total_val=1; total_val <= n*1000; total_val++){
		if(knapsack(n, total_val) <= bag){
			ans = max(ans, total_val);
		}
	}
	cout << ans << endl;
}











































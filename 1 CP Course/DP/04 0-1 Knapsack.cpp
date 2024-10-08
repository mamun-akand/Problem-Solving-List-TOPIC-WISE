// URL: https://atcoder.jp/contests/dp/tasks/dp_d

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 100+5, BAG=1e5+5;
ll w[N], v[N], dp[N][BAG];

ll knapsack(ll n, ll bag){
	if(n==0 || bag == 0) return 0;
	
	if(dp[n][bag] != -1) return dp[n][bag];
	
	ll ans = LLONG_MIN;
	if(bag-w[n] >= 0){
		ll choice1 = v[n] + knapsack(n-1, bag-w[n]);
		ans = max(ans, choice1);
	}
	
	ll choice2 = knapsack(n-1, bag);
	ans = max(ans, choice2);
	
	return dp[n][bag] = ans;
}

int main(){
	memset(dp, -1, sizeof(dp));
	ll n, bag; cin>>n>>bag;
	for(ll i=1; i<=n; i++){
		cin>>w[i]>>v[i];
	}
	cout << knapsack(n, bag) << endl;
}






















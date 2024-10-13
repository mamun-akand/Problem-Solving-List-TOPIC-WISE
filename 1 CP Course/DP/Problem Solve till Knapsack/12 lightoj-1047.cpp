// URL: https://vjudge.net/problem/lightoj-1047
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 25;
ll R[N], G[N], B[N];
ll dp[N][4];

ll min_cost(ll n, ll last){
	if(n==0) return 0;
	if(dp[n][last] != -1) return dp[n][last];
	ll Min = 20005;
	for(ll i=1; i<=3; i++){
		if(i==last) continue;
		if(i==1) Min = min(Min, R[n] + min_cost(n-1, i));
		if(i==2) Min = min(Min, G[n] + min_cost(n-1, i));
		if(i==3) Min = min(Min, B[n] + min_cost(n-1, i));
	}
	return dp[n][last] = Min;
}

int main(){
	ll t; cin>>t; ll cs=0;
	while(t--){
		cs++;
		memset(dp, -1, sizeof(dp));
		ll n; cin>>n;
		for(ll i=1; i<=n; i++){
			cin>>R[i]>>G[i]>>B[i];
		}
		cout << "Case " << cs << ": " << min_cost(n, 0) << endl;
	}
}






















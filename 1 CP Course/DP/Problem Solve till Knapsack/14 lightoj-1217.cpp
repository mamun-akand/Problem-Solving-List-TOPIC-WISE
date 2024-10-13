// URL: https://vjudge.net/problem/lightoj-1217
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1000+5;
ll n, ara[N], dp[N][2][2];
ll max_soap(ll i, ll last_taken, ll first_taken){
	if(i==n+1) return 0;	
	if(dp[i][last_taken][first_taken] != -1){
		return dp[i][last_taken][first_taken];
	}
	ll ans = max_soap(i+1, 0, first_taken);
	if(i == n){
		if(last_taken == 0 && first_taken == 0){
			ans = max(ans, ara[i] + max_soap(i+1, 1, first_taken));
		}
	}else{ 
		if(last_taken == 0){
			ans = max(ans, ara[i] + max_soap(i+1, 1, first_taken));
		}
	}
	return dp[i][last_taken][first_taken] = ans;
}

int main(){
	ll t; cin>>t; ll cs=0;
	while(t--){
		++cs;
		memset(dp, -1, sizeof(dp));
		cin>>n;
		for(ll i=1; i<=n; i++){
			cin>>ara[i];
		}
		ll ans = max_soap(2, 0, 0);
		ans = max(ans, ara[1]+max_soap(2, 1, 1));
		cout << "Case " << cs << ": " << ans << endl;
	}
}






















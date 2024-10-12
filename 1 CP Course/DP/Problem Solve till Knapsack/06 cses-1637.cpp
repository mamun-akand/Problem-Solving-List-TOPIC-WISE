// URL: https://vjudge.net/problem/cses-1637
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e6+7;
ll dp[N];

ll steps(ll n){
	if(n==0) return 0; 
	
	if(dp[n] != -1) return dp[n];
	
	ll curr_n = n;
	ll ans = LLONG_MAX;
	
	while(curr_n != 0){
		ll d = curr_n%10;
		curr_n = curr_n/10;
		
		if(d != 0){
			ll choice = 1 + steps(n-d);	
			ans = min(ans, choice);
		}
	}
	return dp[n]=ans;
}

int main(){
	memset(dp, -1, sizeof(dp));
	ll n; cin>>n;
	cout << steps(n) << endl;
}






















#include<bits/stdc++.h>
using namespace std;
#define	ll long long int
const ll N = 1e5+9;
ll dp[N];

ll min_steps(ll n){
	if(n == 1) return 0;
	
	if(dp[n] != -1) return dp[n];
	
	ll ans=LLONG_MAX;
	if(n>1){
		ll choice1 = 1 + min_steps(n-1);
		ans = min(ans, choice1);
	}
	if(n%2==0){
		ll choice2 = 1 + min_steps(n/2);
		ans = min(ans, choice2);
	}
	if(n%3==0){
		ll choice3 = 1 + min_steps(n/3);
		ans = min(ans, choice3);
	}
	return dp[n] = ans;
}

int main(){
	memset(dp, -1, sizeof(dp));
	ll n; cin>>n;
	cout << min_steps(n) << endl;
}























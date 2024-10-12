// URL: https://vjudge.net/problem/cses-1637
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e6+7;
ll dp[N];

int main(){
	ll n; cin>>n;
	dp[0] = 0;
	
	for(ll x=1; x<=n; x++){
		ll curr_n = x;
		ll ans = LLONG_MAX;
		
		while(curr_n != 0){
			ll d = curr_n%10;
			curr_n = curr_n/10;
			
			if(d != 0){
				ll choice = 1 + dp[x-d];	
				ans = min(ans, choice);
			}
		}
		dp[x]=ans;
	}	
	cout << dp[n] << endl;
}






















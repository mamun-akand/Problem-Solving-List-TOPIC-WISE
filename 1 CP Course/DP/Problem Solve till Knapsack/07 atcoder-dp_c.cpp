// URL: https://vjudge.net/problem/atcoder-dp_c
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll N = 1e5+7;
ll a[N], b[N], c[N];
ll dp[N][4];

ll max_happiness(ll n, ll task){
	if(n==0) return 0;
	
	if(dp[n][task] != -1) return dp[n][task];
	
	if(task == 0){
		ll choice1 = a[n] + max_happiness(n-1, 1); 
		ll choice2 = b[n] + max_happiness(n-1, 2); 
		ll choice3 = c[n] + max_happiness(n-1, 3); 
		return dp[n][task] = max({choice1, choice2, choice3});
	}else if(task == 1){
		ll choice2 = b[n] + max_happiness(n-1, 2); 
		ll choice3 = c[n] + max_happiness(n-1, 3); 
		return dp[n][task] = max(choice2, choice3);

	}else if(task == 2){
		ll choice1 = a[n] + max_happiness(n-1, 1); 
		ll choice3 = c[n] + max_happiness(n-1, 3); 
		return dp[n][task] = max(choice1, choice3);
	}else{
		ll choice1 = a[n] + max_happiness(n-1, 1); 
		ll choice2 = b[n] + max_happiness(n-1, 2); 
		return dp[n][task] = max(choice1, choice2);
	}
}

int main(){
	memset(dp, -1, sizeof(dp));
	ll n; cin>>n;
	for(ll i=1; i<=n; i++){
		cin>>a[i]>>b[i]>>c[i];
	}
	cout << max_happiness(n, 0) << endl;
}






















// URL: https://vjudge.net/problem/cses-1638
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1000+5, mod = 1e9+7;
char ara[N][N]; ll n;
ll dp[N][N];

ll paths(ll i, ll j){
	if(i==n && j==n) return 1;
	if(i>n or j>n) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	ll choice1 = 0, choice2 = 0;
	if(ara[i+1][j] == '.'){
		choice1 = paths(i+1, j);
	}
	if(ara[i][j+1] == '.'){
		choice2 = paths(i, j+1);
	}
	return dp[i][j]=(choice1+choice2)%mod;
}

int main(){
	memset(dp, -1, sizeof(dp));
	cin>>n;
	for(ll i=1; i<=n; i++){
		for(ll j=1; j<=n; j++){
			cin>>ara[i][j];
		}
	}
	if(ara[1][1]=='*') {cout << 0 << endl; return 0;}
	cout << paths(1, 1) << endl;
}






















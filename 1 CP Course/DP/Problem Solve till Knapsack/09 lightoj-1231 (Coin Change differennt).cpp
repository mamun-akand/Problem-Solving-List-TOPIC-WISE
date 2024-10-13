#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 55, mod = 100000007;
ll dp[55][1005];

ll coin, total_taka;
ll coin_val[N], coin_num[N];

ll coin_change(ll n, ll sum){
   if(n == 0 || sum == 0){
      if(sum == 0) return 1%mod;
      else return 0%mod;
   }
   if(dp[n][sum] != -1){
      return dp[n][sum];
   }
   ll ans = 0;
   for(ll i=0; i<=coin_num[n]; i++){
	   if(sum >= i*coin_val[n]){
	   	  ll choice1 = coin_change(n-1, sum-(i*coin_val[n]));
	   	  ans = (ans+choice1)%mod;
	   }
   }
   return dp[n][sum] = ans%mod;
}

int main(){
   ll t; cin>>t;
   ll cs=0;
   while(t--){
   	   ++cs;
	   cin>>coin>>total_taka;
	   
	   for(ll i=1; i<=coin; i++){
	      cin>>coin_val[i];
	   }
	   for(ll i=1; i<=coin; i++){
	      cin>>coin_num[i];
	   }
	   memset(dp, -1, sizeof(dp));
	   
	   cout << "Case " << cs << ": " << coin_change(coin, total_taka)%mod << endl;
   }
}
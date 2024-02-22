#include<bits/stdc++.h>
using namespace std;
#define ll long long

//coin change 2: Min Coin Required to make Change_Money;
ll dp[1005][1005]; //as per need size

ll coin_change(ll n, ll sum, ll ara[]){
   if(n == 0 || sum == 0){
      if(sum == 0) return 0;
      else return LLONG_MAX-1; // to escape overflow
   }
   
   if(dp[n][sum] != -1){
      return dp[n][sum];
   }
   
   if(sum >= ara[n]){
      ll choice1 = 1 + coin_change(n, sum-ara[n], ara);
      ll choice2 = coin_change(n-1, sum, ara);
      return dp[n][sum] = min(choice1, choice2);
   }else{
      ll choice = coin_change(n-1, sum, ara);
      return dp[n][sum] = choice;
   }
}

int main(){
   ll coin, total_taka; cin>>coin>>total_taka;
   ll coin_val[coin+1];
   
   for(ll i=1; i<=coin; i++){
      cin>>coin_val[i];
   }
   memset(dp, -1, sizeof(dp));
   
   ll ans = coin_change(coin, total_taka, coin_val);
   // cout << ans << endl;
   
   if(ans == LLONG_MAX-1) cout << "NOT POSSIBLE" << endl;
   else cout << ans << endl; 
}

/*

Input:
3 5
1 2 3
Output: 
2 [Example: 3+2=5]

Input:
3 7
3 6 8
Output: 
NOT POSSIBLE

*/
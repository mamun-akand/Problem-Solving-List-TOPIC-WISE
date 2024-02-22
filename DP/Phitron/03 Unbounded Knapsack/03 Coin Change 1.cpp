#include<bits/stdc++.h>
using namespace std;
#define ll long long

//coin change 1 : Number of ways to make Change_Money;
ll dp[1005][1005];

ll coin_change(ll n, ll sum, ll ara[]){
   if(n == 0 || sum == 0){
      if(sum == 0) return 1;
      else return 0;
   }
   
   if(dp[n][sum] != -1){
      return dp[n][sum];
   }
   
   if(sum >= ara[n]){
      ll choice1 = coin_change(n, sum-ara[n], ara);
      ll choice2 = coin_change(n-1, sum, ara);
      return dp[n][sum] = choice1+choice2;
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
   
   cout << coin_change(coin, total_taka, coin_val);
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ara[1005];
ll dp[1005][1005];

ll subset_sum(ll n, ll sum){
   if(n==0){             //base
      if(sum == 0) return 1;
      else return 0;
   }
   if(dp[n][sum] != -1){ //dp
      return dp[n][sum];
   }
   
   if(ara[n] <= sum){   
      ll choice1 = subset_sum(n-1, sum-ara[n]);
      ll choice2 = subset_sum(n-1, sum);
      return dp[n][sum] = choice1 + choice2;
   }else{
      ll choice = subset_sum(n-1, sum);
      return dp[n][sum] = choice;
   }
}

int main(){
   ll n, sum; cin>>n>>sum;
   for(ll i=1; i<=n; i++){
      cin>>ara[i];
   }
   
   for(ll i=0; i<=n; i++){
      for(ll j=0; j<=sum; j++){
         dp[i][j] = -1;
      }
   }
   
   cout << subset_sum(n, sum) << endl;
}
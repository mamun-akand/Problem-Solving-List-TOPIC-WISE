#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ara[1005], total=0;
ll dp[1005][1005];

ll subset_sum(ll n, ll sum){
   if(n==0){             //base
      return abs(abs(total-sum) - sum);
   }
   
   if(dp[n][sum] != -1){ //dp
      return dp[n][sum];
   }
     
   if(sum+ara[n] != total){
      ll choice1 = subset_sum(n-1, sum+ara[n]);
      ll choice2 = subset_sum(n-1, sum);
      return dp[n][sum] = min(choice1, choice2);
   }else{
      ll choice = subset_sum(n-1, sum);
      return dp[n][sum] = choice;
   }
}

int main(){
   ll n; cin>>n;
   for(ll i=1; i<=n; i++){
      cin>>ara[i];
      total += ara[i];
   }
   for(ll i=0; i<=n; i++){
      for(ll j=0; j<=total; j++){
         dp[i][j] = -1;
      }
   }
   cout << subset_sum(n, 0) << endl;
}

/*
input:
4
1 5 4 13

Output:
3
*/
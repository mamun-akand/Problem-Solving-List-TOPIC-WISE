#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ara[1005], total=0, n, Mini;
ll dp[1005][1005];

ll subset_sum(ll n, ll sum){
   if(n==0){
      if(abs(abs(total - sum) - sum) == Mini){
         return 1;  
      }else{
         return 0;
      }
   }
   
   if(dp[n][sum] != -1){ //dp
      return dp[n][sum];
   }
     
   ll choice1 = subset_sum(n-1, sum+ara[n]);
   ll choice2 = subset_sum(n-1, sum);
   return dp[n][sum] = choice1+choice2;
}

int main(){
   cin>>n>>Mini;
   for(ll i=1; i<=n; i++){
      cin>>ara[i];
      total += ara[i];
   }
   for(ll i=0; i<=n; i++){
      for(ll j=0; j<=total; j++){
         dp[i][j] = -1;
      }
   }
   cout << subset_sum(n, 0)/2 << endl;
}

/*
input:
4 8
1 2 3 4

Output:
1
*/
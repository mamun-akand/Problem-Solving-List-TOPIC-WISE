#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
   s1 - s2 = dif
   s1 + s2 = sum
   --------------
   2s1     = dif+sum
   s1      = (dif+sum)/2;
*/

ll ara[1005], to_find;
ll dp[1005][1005];

ll subset_sum(ll n, ll sum){
   if(n==0){
      if(sum==to_find) return 1;
      else return 0;  
   }
   
   if(dp[n][sum] != -1){ //dp
      return dp[n][sum];
   }
     
   ll choice1 = subset_sum(n-1, sum+ara[n]);
   ll choice2 = subset_sum(n-1, sum);
   return dp[n][sum] = choice1+choice2;
}

int main(){
   ll n, dif; cin>>n>>dif;
   ll sum = 0;
   for(ll i=1; i<=n; i++){
      cin>>ara[i];
      sum += ara[i];
   }
   to_find = (dif+sum)/2;
   for(ll i=0; i<=n; i++){
      for(ll j=0; j<=sum; j++){
         dp[i][j] = -1;
      }
   }
   cout << subset_sum(n, 0) << endl;
}

/*
input:
4 8
1 2 3 4

Output:
1
*/
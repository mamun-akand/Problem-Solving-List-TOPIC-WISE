#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ara[1005];
ll dp[1005][1005];

bool subset_sum(ll n, ll sum){
   if(n==0){
      if(sum == 0) return true;
      else return false;
   }
   if(dp[n][sum] != -1){
      return dp[n][sum];
   }
   
   if(ara[n] <= sum){
      bool choice1 = subset_sum(n-1, sum-ara[n]);
      bool choice2 = subset_sum(n-1, sum);
      return dp[n][sum] = choice1 || choice2;
   }else{
      bool choice = subset_sum(n-1, sum);
      return dp[n][sum] = choice;
   }
}

int main(){
   ll n; cin>>n;
   ll total = 0;
   for(ll i=1; i<=n; i++){
      cin>>ara[i];
      total += ara[i];
   }
   for(ll i=0; i<=n; i++){
      for(ll j=0; j<=total/2; j++){
         dp[i][j] = -1;
      }
   }
   
   if(total%2==1){
      cout << "NO" << endl;
   }else{
      if(subset_sum(n, total/2)) cout<<"YES"<<endl;
      else cout << "NO" << endl;
   }
}

/*
Input:
4
1 4 9 4
half = 9 and 9

Output:
YES
*/
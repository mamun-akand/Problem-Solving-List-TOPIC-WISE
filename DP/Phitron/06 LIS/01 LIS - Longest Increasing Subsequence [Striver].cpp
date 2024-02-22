//https://www.youtube.com/watch?v=ekcwMsSIzVc
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll LIS(ll n, ll prev, vector<ll> &v, vector<vector<ll>> &dp){
   if(n<0) return 0;   
   
   if(dp[n][prev+1] != -1) return dp[n][prev+1];
   
   if(prev == -1 || v[n] < v[prev]){
      ll choice1 = 1 + LIS(n-1, n, v, dp);
      ll choice2 = LIS(n-1, prev, v, dp);
      return dp[n][prev+1] = max(choice1,  choice2);
   }else{
      ll choice = LIS(n-1, prev, v, dp);
      return dp[n][prev+1] = choice;
   }
}

int main(){
   ll n; cin>>n;
   vector<ll> v(n);
   for(ll i=0; i<n; i++){
      cin>>v[i];
   }
   vector<vector<ll>>dp(n, vector<ll>(n+1, -1)); 
   //dp column n+1, cause -1 indx not exist, so -1,0,1 = 0,1,2 shifted
   cout << LIS(n-1, -1, v, dp) << endl;
}
/* 6
2 5 3 7 101 18
Out: 4 */
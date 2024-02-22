#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   string s1, s2; cin>>s1>>s2;
   ll m = s1.size(), n = s2.size();
   
   ll dp[m+1][n+1];
     
   //base = 0
   for(ll i=0; i<=m; i++){
      for(ll j=0; j<=n; j++){
         if(i==0 || j==0) dp[i][j] = 0;
      }
   } 
   //recursive portion
   for(ll i=1; i<=m; i++){
      for(ll j=1; j<=n; j++){
         if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
         else{
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
         }
      }
   } 
     
   cout << dp[m][n] << endl; 
}


/*
abh
ahg
output: 2
abdef
adegf
output: 4
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//(n+m)-lcs = Shortest Common Supersequence
int main(){
   string s1, s2; cin>>s1>>s2;
   ll n = s1.size(), m = s2.size();
   
   ll dp[n+1][m+1];
   for(ll i=0; i<=n; i++){
      for(ll j=0; j<=m; j++){
         if(i==0 || j==0) dp[i][j] = 0;
      }
   }
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=m; j++){
         if(s1[i-1] == s2[j-1]) dp[i][j] = 1+dp[i-1][j-1];
         else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
   }
   
   //(n+m) - lcs
   cout << (n+m) - dp[n][m] << endl;
}

/* ckkgcd
kxgxcyd
Output: 9*/
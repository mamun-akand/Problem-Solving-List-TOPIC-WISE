#include<bits/stdc++.h>
using namespace std;
using ll = long long;
//s1 = original string
//s2 = reverse original str
//now lcs s1 and s2
int main(){
   string s1; cin>>s1;
   string s2 = s1;
   reverse(s1.begin(), s1.end());
   ll m = s1.size(), n = s2.size();
   //LCS
   ll dp[m+1][n+1];
   for(ll i=0; i<=m; i++){
      for(ll j=0; j<=n; j++){
         if(i==0 || j==0) dp[i][j] = 0;
      }
   } 
   for(ll i=1; i<=m; i++){
      for(ll j=1; j<=n; j++){
         if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
         else{
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
         }
      }
   } 
   cout << dp[m][n] << endl; //print LCS Count
   //LCS String Print
   ll i=m, j=n;
   string ans = "";
   
   while(i != 0 && j != 0){
      if(s1[i-1] == s2[j-1]){
         ans += s1[i-1];
         i--;
         j--;
      }else{
         if(dp[i][j-1] > dp[i-1][j]){
            j--;
         }else{
            i--;
         }
      }
   }
   reverse(ans.begin(), ans.end());
   cout << ans << endl;
}
/* mxaydapm
output:5
madam */
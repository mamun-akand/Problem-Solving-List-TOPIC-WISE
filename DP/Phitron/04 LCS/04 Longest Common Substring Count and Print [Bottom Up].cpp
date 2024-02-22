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
            dp[i][j] = 0; //only diff between string and subsequence.
         }
      }
   } 
   //table check
   /* for(ll i=0; i<=m; i++){
         for(ll j=0; j<=n; j++){
            cout << dp[i][j] << ' ';
         }
         cout << endl;
      }
   */ 
   
   // Longest String doesn't exist in the last like subsequence
   // So need to check whole table for max value, and its pos.
   ll max_sub_count = 0;
   ll pos_i = 0, pos_j = 0;
   for(ll i=0; i<=m; i++){
      for(ll j=0; j<=n; j++){
         if(dp[i][j] > max_sub_count){
            max_sub_count = dp[i][j];
            pos_i = i;
            pos_j = j;
         }
      }
   }
   //max_substring_count print
   cout << max_sub_count << endl; 
   
   //Longest Common String Print
   ll i = pos_i, j = pos_j;
   string ans = "";
   while(i!= 0 && j != 0){
      if(s1[i-1] == s2[j-1]){
         ans += s1[i-1];
      }else{
         break;
      }
      i--;
      j--;
   }
   reverse(ans.begin(), ans.end());
   cout << ans << endl; 
}
/* 
aceghr
acaeghbr
output:
3
egh 
*/
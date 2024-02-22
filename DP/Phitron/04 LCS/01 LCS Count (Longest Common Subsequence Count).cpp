#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll dp[1005][1005];

ll lcs(string s1, ll m, string s2, ll n){
   if(m==0 || n==0) return 0; //base

   if(dp[m][n] != -1) return dp[m][n]; //dp
   
   if(s1[m-1] == s2[n-1]){
      ll ans1 = 1 + lcs(s1, m-1, s2, n-1);
      return dp[m][n] = ans1;
   }else{
      ll ans1 = lcs(s1, m-1, s2, n);
      ll ans2 = lcs(s1, m, s2, n-1);
      return dp[m][n] = max(ans1, ans2);
   }
}

int main(){
   string s1, s2; cin>>s1>>s2;
   memset(dp, -1, sizeof(dp));
   
   cout << lcs(s1, s1.size(), s2, s2.size());
}

/*
abh
ahg
output: 2
*/
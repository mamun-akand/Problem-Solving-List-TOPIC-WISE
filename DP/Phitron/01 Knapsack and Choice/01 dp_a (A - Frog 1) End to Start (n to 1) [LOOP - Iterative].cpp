// https://atcoder.jp/contests/dp/tasks/dp_a
#include<bits/stdc++.h>
using namespace std;
#define   ll    long long int

int main(){
   ll n; cin>>n;
   ll ara[n+1], dp[n+1];
   for(ll i=1; i<=n; i++){
      cin>>ara[i];
   }
   dp[1] = 0;
   dp[2] = abs(ara[2]-ara[1]);
   
   for(ll i=3; i<=n; i++){
      ll cost1 = dp[i-1] + abs(ara[i]-ara[i-1]);
      ll cost2 = dp[i-2] + abs(ara[i]-ara[i-2]);
      dp[i] = min(cost1, cost2);
   }
   cout << dp[n] << endl;
}
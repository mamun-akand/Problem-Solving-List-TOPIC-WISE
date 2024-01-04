#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
   ll n, k; cin>>n>>k;
   ll ara[n+1]; for(ll i=1; i<=n; i++) cin>>ara[i];
   
   ll sum=0, ans=0;
   for(ll i=1; i<=n; i++){
      sum += ara[i];
      if(i >= k){
         ans  = max(ans, sum);
         sum -= ara[i-k+1];
      }
   }
   cout << ans << endl;
}


/*
Input
5 3
2 6 4 3 7
Output
14
*/
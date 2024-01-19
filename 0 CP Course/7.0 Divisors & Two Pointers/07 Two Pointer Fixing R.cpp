// https://cses.fi/problemset/task/2428
// https://cses.fi/problemset/submit/2428/

#include<bits/stdc++.h>
using namespace std;

#define   ll    long long int
#define   vll   vector <ll>	

int main(){
   ll n, k; cin>>n>>k;
   vll v(n+1); for(ll i=1; i<=n; i++) cin>>v[i];
   
   map<ll,ll> mp;
   ll L=1, ans=0;
   for(ll R=1; R<=n; R++){
      mp[v[R]]++;
      while(L<=R and mp.size()>k){
         mp[v[L]]--;
         if(mp[v[L]]==0) mp.erase(v[L]);
         L++;
      }
      ans += R-L+1;
   }
   cout << ans << endl;
}
// URL: https://codeforces.com/contest/295/problem/A
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 1e5+100;
ll a[N], dif_ara[N], l[N], r[N], d[N], times[N];

int main(){
   ll n, m, k; cin>>n>>m>>k;
   for(ll i=1; i<=n; i++) cin>>a[i];
   for(ll i=1; i<=m; i++){
      cin>>l[i]>>r[i]>>d[i];
   }
   //for k
   for(ll i=1; i<=k; i++){
      ll left, right; cin>>left>>right;
      times[left]++;
      times[right+1]--;
   }
   for(ll i=1; i<=m; i++){
      times[i] = times[i]+times[i-1];
   }
   
   //main array
   for(ll i=1; i<=n; i++){
      dif_ara[i] = a[i] - a[i-1];
   }
   for(ll i=1; i<=m; i++){
      dif_ara[l[i]]   += (d[i]*times[i]);
      dif_ara[r[i]+1] -= (d[i]*times[i]);
   }
   for(ll i=1; i<=n; i++){
      a[i] = dif_ara[i] + a[i-1];
   }
   for(ll i=1; i<=n; i++){
      cout << a[i] << ' ';
   }
   
   return 0;
}
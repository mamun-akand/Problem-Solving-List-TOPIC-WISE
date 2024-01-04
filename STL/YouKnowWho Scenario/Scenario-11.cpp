#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 1009;

int main(){
   
   ll n, k; cin>>n>>k;
   bitset<N> bs[n];
   
   for(ll i=0; i<n; i++){
      string s; cin>>s;
      bs[i] = bitset<N>(s);
   }
   
   ll ans = 0;
   
   // Total O(n^2*(n/64)) =  O(n^3 / 64) = O(10^9 / 64) < O(10^8)
   // .count() = n/64
   for(ll i=0; i<n; i++){
      for(ll j=i+1; j<n; j++){
         if((bs[i]^bs[j]).count() <= k) ans++;
      }
   }
   cout << ans << endl;
}

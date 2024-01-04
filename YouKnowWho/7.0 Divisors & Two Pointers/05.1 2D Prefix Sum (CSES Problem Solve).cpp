//https://cses.fi/problemset/task/1652/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 1e3+9;
int a[N][N], pref[N][N];

int main(){
   ll n, q; cin>>n>>q;
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=n; j++){
         char ch; cin>>ch;
         if(ch == '*') a[i][j] = 1;
         else a[i][j] = 0;
      }
   }
   
   for(ll i=1; i<=n; i++){ //prefix sum
      for(ll j=1; j<=n; j++){
         pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + a[i][j];
      }
   }
   
   //submatrix sum print
   while(q--){
      ll x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
      ll ans = pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1];
      cout << ans << endl; 
   }
}
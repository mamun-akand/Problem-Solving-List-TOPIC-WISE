//Problem: You are given a n×m matrix. You have to answer q queries of the form x1,y1,x2,y2​. For each query, you have to find the sum of all elements in the submatrix with top-left corner (x1,y1) and bottom-right corner (x2​,y2​).
//Constraints: 1≤n,m≤10^3, 1≤q≤10^6, 1≤x1≤x2≤n, 1≤y1≤y2≤m, −109 ≤ a[i]j] ≤10^9

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const ll N = 1e3+100;

ll a[N][N], pref[N][N];

int main(){
   ll n, m; cin>>n>>m;
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=m; j++){
         cin>>a[i][j];
      }
   }
   
   for(ll i=1; i<=n; i++){ //prefix sum
      for(ll j=1; j<=m; j++){
         pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + a[i][j];
      }
   }
   
   ll q; cin>>q; //submatrix sum print
   while(q--){
      ll x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
      ll ans = pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1];
      cout << ans << endl; 
   }
}

/*
Input:
4 5
1 2 3 4 5
2 1 3 4 5
1 1 2 3 1
3 4 2 1 4
2
1 1 4 5
3 3 4 5

Output:
52
13
*/
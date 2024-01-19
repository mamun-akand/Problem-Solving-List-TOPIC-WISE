//Statement: You are given a n×m matrix. You have to perform q updates of the form x1,y1,x2,y2,x. For each query, you have to add x to all elements in the submatrix with top-left corner (x1,y1) and bottom-right corner (x2,y2). After all queries, print the final matrix.
//Constraints: 1≤n,m≤10^3, 1≤q≤10^6, 1≤x1​≤x2​≤n, 1≤y1​≤y2​≤m, −10^9≤a[i][j],x≤10^9

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 1e3+9;
ll a[N][N], d[N][N];

int main(){
   ll n, m; cin>>n>>m;
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=m; j++){
         cin>>a[i][j];
      }
   }
   //query: rectangular range update
   ll q; cin>>q;
   while(q--){
      ll x1, y1, x2, y2, add_x; cin>>x1>>y1>>x2>>y2>>add_x;
      d[x1][y1]     += add_x;
      d[x1][y2+1]   -= add_x;
      d[x2+1][y1]   -= add_x;
      d[x2+1][y2+1] += add_x;
   }
   //prefix sum of range 
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=m; j++){
         d[i][j] += d[i-1][j] + d[i][j-1] - d[i-1][j-1];
      }
   }
   //final array update
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=m; j++){
         a[i][j] += d[i][j];
      }
   }
   //print final array
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=m; j++){
         cout << a[i][j] << ' ';
      }
      cout << endl;
   }
}


/*
Input:
4 5
0 0 0 0 0 
0 5 5 5 0 
0 5 5 5 0 
0 0 0 0 0 
2
2 2 3 4 1
3 2 4 5 1

Output:
0 0 0 0 0 
0 6 6 6 0 
0 7 7 7 1 
0 1 1 1 1 

*/
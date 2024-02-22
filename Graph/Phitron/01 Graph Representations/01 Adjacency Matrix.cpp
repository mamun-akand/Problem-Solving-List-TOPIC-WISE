#include<bits/stdc++.h>
using namespace std;
#define ll long long

//adjMatx used if dense edges
const ll N = 1e3;
ll adjMatrix[N+1][N+1]; //[n+1], cause 1 based h,if 0 based only [n]

int main(){
   ll n, m; cin>>n>>m;    //n nodes, m edges
   
   //storing graph
   for(ll i=1; i<=m; i++){
      ll u, v, w; cin>>u>>v>>w;
      adjMatrix[u][v] = w;
      adjMatrix[v][u] = w; // if undirected
   }
   
   //print
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=n; j++){
         cout << adjMatrix[i][j] << ' ';
      }
      cout << endl;
   }
   
   return 0;
}
//space: O(n*n)
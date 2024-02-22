#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   ll n, m; cin>>n>>m;    //n nodes, m edges
   
   //storing graph
   ll adj[n+1][n+1];      //[n+1], cause 1 based graph,if 0 based only [n]
   
   for(ll i=0; i<m; i++){
      ll u, v; cin>>u>>v;
      adj[u][v] = 1;
      adj[v][u] = 1;     //undirected
   }
   
   return 0;
}

//space: O(n*n)
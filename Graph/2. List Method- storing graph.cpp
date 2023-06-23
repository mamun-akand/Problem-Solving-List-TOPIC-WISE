#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   ll n, m; cin>>n>>m;    //n nodes, m edges
   
   //storing graph using List
   vector<ll> list[n+1];  //[n+1], 1 based graph,if 0 based only [n]
   
   for(ll i=0; i<m; i++){
      ll u, v; cin>>u>>v;
      list[u].push_back(v); //directed hole only eta.
      list[v].push_back(u); //undirected  
   }
   
   return 0;
}

//space: O(n*n)
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   ll n, m; cin>>n>>m;
   
   vector<pair<ll,ll>> list[n+1];
   
   for(ll i=0; i<m; i++){
      ll u, v, weight; cin>>u>>v>>weight;
      list[u].push_back({v, weight}); 
      list[v].push_back({u, weight}); //undirected
   }
}

//space: O(n*n)
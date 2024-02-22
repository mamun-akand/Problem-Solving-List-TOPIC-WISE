//Question 03: You will be given a directed graph as input. Store this graph in an adjacency list. Now, convert this adjacency list to an adjacency matrix (index starting from 1) and print it. Consider root as 1.

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e5;
vector<ll> adjList[N];

int main(){
   ll n, m; cin>>n>>m;
   for(ll i=0; i<m; i++){
      ll u, v; cin>>u>>v;
      adjList[u].push_back(v);
   }
   
   ll adjMatrix[n+1][n+1] = {0};
   for(ll i=1; i<=n; i++){
      for(auto x:adjList[i]){
         adjMatrix[i][x] = 1;
      }
   }
   
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=n; j++){
         cout << adjMatrix[i][j] << ' ';
      }
      cout << endl;
   }
}
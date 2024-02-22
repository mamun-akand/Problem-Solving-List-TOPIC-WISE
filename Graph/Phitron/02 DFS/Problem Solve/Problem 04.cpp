//Question 01: You will be given an undirected graph. Print its DFS traversal in reverse order. Consider root as 1.

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e5;
vector<ll> adjList[N];
vector<ll> dfs_ans;
ll visited[N] = {0};
ll depth[N];

void dfs(ll u){
   dfs_ans.push_back(u);
   visited[u] = 1;
   for(auto v:adjList[u]){
      if(visited[v] == 0){
         depth[v] = depth[u] + 1;  
         dfs(v);
      }
   }
   return;
}

int main(){
   ll n, m; cin>>n>>m;
   for(ll i=0; i<m; i++){
      ll u, v; cin>>u>>v;
      adjList[u].push_back(v);
      adjList[v].push_back(u);
   }
   
   ll d; cin>>d;
   
   dfs(1);
   cout << "Depth of " << d << " = " << depth[d] << endl;
}

/*7 
6
1 2
2 4
2 5
1 3
3 6
1 7
4

Out:
Depth of 4 = 2*/


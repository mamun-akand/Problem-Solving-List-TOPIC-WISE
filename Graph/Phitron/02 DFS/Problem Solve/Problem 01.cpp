//Question 01: You will be given an undirected graph. Print its DFS traversal in reverse order. Consider root as 1.

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e5;
vector<ll> adjList[N];
vector<ll> dfs_ans;
ll visited[N] = {0};

void dfs(ll u){
   dfs_ans.push_back(u);
   visited[u] = 1;
   for(auto v:adjList[u]){
      if(visited[v] == 0){
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
   
   dfs(1);
   reverse(dfs_ans.begin(), dfs_ans.end());
   for(auto x:dfs_ans){
      cout << x << ' ';
   }
}
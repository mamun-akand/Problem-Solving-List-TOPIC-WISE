#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define vll vector<ll>
const ll N = 1e3+5;

vll ans;

void bfs(ll source, ll *visited, vll *adjList){
   queue<ll> q;
   q.push(source);
   visited[source]=1;
   vll comp;
   
   while(!q.empty()){
      ll last = q.front();
      q.pop();
      comp.push_back(last);
      for(auto it:adjList[last]){
         if(visited[it] == 0){
            q.push(it);
            visited[it]=1;
         }
      }
   }
   if(comp.size() > 1) ans.push_back(comp.size());
}

int main(){
   ll n, m; cin>>n>>m;
   vll adjList[N];
   for(ll i=0; i<m; i++){
      ll u, v; cin>>u>>v;
      adjList[u].push_back(v);
      adjList[v].push_back(u);
   }
   ll visited[N] = {0};

   for(ll i=0; i<N; i++){
      if(visited[i] == 0){
         bfs(i, visited, adjList);
      }
   }
   sort(ans.begin(), ans.end());
   for(auto x:ans){
      cout << x << ' ';
   }
}
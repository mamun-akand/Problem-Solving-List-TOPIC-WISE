#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define vll vector<ll>

bool isCycleDFS(ll source, ll parent, ll *visited, vll *adjList){
   visited[source] = 1;
   for(auto v : adjList[source]){
      if(visited[v] == 0){
         bool temp = isCycleDFS(v, source, visited, adjList);
         if(temp == true) return true;
      }else if(visited[v] == 1 && v != parent){
         return true;
      }
   }
   return false;
}

int main(){
   ll n, m; cin>>n>>m;
   vll adjList[n+1];
   for(ll i=0; i<m; i++){
      ll u, v; cin>>u>>v;
      adjList[u].push_back(v);
      adjList[v].push_back(u);
   }
   ll visited[n+1] = {0};
   bool ans = false;
   for(ll i=1; i<=n; i++){ //for disconnected
      if(visited[i] == 0) 
         ans = ans | isCycleDFS(i, -1, visited, adjList);
   }
   if(ans) cout << "CycleDetected" << endl;
   else cout << "No Cycle" << endl;
}

/*Input:
9
7
1 2
1 3
2 4
3 4
3 5
6 7
8 9
Output: CycleDetected

10 
9
1 2
1 3
1 10
2 4
3 5
3 6
4 7
4 8
6 9
Output: No Cycle




*/
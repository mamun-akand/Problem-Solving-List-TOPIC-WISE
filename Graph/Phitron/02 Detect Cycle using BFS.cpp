#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define vll vector<ll>

bool isCycleBFS(ll source, ll *visited, vll *adjList){
   queue<pair<ll,ll>> q;
   q.push({source, -1});
   visited[source]=1;
   
   while(!q.empty()){
      ll last = q.front().first;
      ll parent = q.front().second; //parent of last out node
      q.pop();
      for(auto it : adjList[last]){
         if(visited[it] == 0){
            q.push({it, last});
            visited[it]=1;
         }else if(visited[it] == 1 && it != parent){ //if cycle
         //already visited by other node && not also parent node of last
            return true;
         }
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
         ans = ans | isCycleBFS(i, visited, adjList);
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
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define vll vector<ll>
ll cnt=0;
void bfs(ll source, ll *visited, vll *adjList){
   queue<ll> q;
   q.push(source);
   visited[source]=1;
   cout << "Component "<< ++cnt <<": ";
   
   while(!q.empty()){
      ll last = q.front();
      q.pop();
      cout << last << ' ';
      for(auto it:adjList[last]){
         if(visited[it] == 0){
            q.push(it);
            visited[it]=1;
         }
      }
   }
   cout << endl;
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
   ll cc = 0;
   vll connection;
   for(ll i=1; i<=n; i++){
      if(visited[i] == 0){
         cc++;
         connection.push_back(i);
         bfs(i, visited, adjList);
         //same way,use dfs to travers works
      }
   }
   cout <<"Total: "<< cc << endl;
   for(auto x:connection){
      cout << x << ' ';
   }
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

Output:
Component 1: 1 2 3 4 5 
Component 2: 6 7 
Component 3: 8 9 
Total: 3
1 6 8
*/
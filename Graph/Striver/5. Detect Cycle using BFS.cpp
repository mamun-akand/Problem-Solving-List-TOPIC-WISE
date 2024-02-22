//GeeksforGeeks: https://bit.ly/3cZMJXp

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends



class Solution {
  bool detectCycle(int source, vector<int> adj[], int vis[]){
      int start = source;
      vis[start] = 1;
      queue< pair<int, int> >q;
      q.push({start, -1});
      
      while(!q.empty()){
          int node = q.front().first;
          int parent = q.front().second;
          q.pop();
          
          for(auto it : adj[node]) {
              if(vis[it] == 0){
                 vis[it] = 1;
                 q.push({it, node});
              }
              else if(vis[it] == 1 && it != parent){
              //already visited by other node && not also parent node.
                  return true;
              }             
          }
      }
      return false;
  }
    
  public:
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V] = {0};
        //For every connected components, checking if it is a cycle
        for(int source=0; source<V; source++){
            if(vis[source] == 0){
                bool temp = detectCycle(source, adj, vis);
                if(temp) return true;
            }
        }
        return false;
    }
};




//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
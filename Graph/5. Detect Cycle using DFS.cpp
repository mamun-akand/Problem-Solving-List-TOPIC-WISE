//https://bit.ly/3cZMJXp

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends



class Solution {
  //using DFS
  bool detectCycle(int source, int parent, vector<int> adj[], int vis[]){
        int node = source;
        vis[node] = 1;
              
        for(auto it : adj[node]) {
            if(vis[it] == 0){
                bool x = detectCycle(it, node, adj, vis);
                if(x==true) return true;
            }
            //already visited by other node && not also parent node.
            else if(vis[it] == 1 && it != parent){
                return true;
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
                bool temp = detectCycle(source, -1, adj, vis);
                if(temp==true) return true;
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
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends
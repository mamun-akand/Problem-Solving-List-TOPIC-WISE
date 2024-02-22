// https://bit.ly/3SlYvLp

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends



class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        
        vector<vector<pair<int, int>>> adjList(n+1);
        for(auto it : edges){
            adjList[it[0]].push_back({it[1], it[2]}); 
            adjList[it[1]].push_back({it[0], it[2]});
        }
        
        priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        vector<int> distance(n+1, INT_MAX);
        vector<int> fromWhere (n+1);
        
        for(int i=1; i<=n; i++){
            fromWhere[i] = i; 
        }
        
        int S = 1;
        
        pq.push({0, S});
        distance[S] = 0;
        fromWhere[S] = S;
        
        while(!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto it:adjList[node]){
                int toNode = it.first;
                int toDis  = it.second;
                
                if(dis+toDis < distance[toNode]){
                    pq.push({dis+toDis, toNode});
                    distance[toNode] = dis + toDis;
                    fromWhere[toNode] = node; 
                }
            }
        }
        
        if(distance[n] == INT_MAX) return {-1};
        
        vector<int> path;
        int node = n;
        
        while(fromWhere[node] != node){
            path.push_back(node);
            node = fromWhere[node];
        }
        path.push_back(1);  // 1 starting node, not pushed yet. so pushing now.
        
        reverse(path.begin(), path.end());
        
        return path;
    }
};




//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}
// } Driver Code Ends
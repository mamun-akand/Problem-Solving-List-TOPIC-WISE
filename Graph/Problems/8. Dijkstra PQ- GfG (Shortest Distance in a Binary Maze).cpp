// https://bit.ly/3QLxjET

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends




class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source, pair<int, int> destination) {
        
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> dis(n, vector<int>(m, INT_MAX));
        
        pq.push({0, source});
        int r = source.first;
        int c = source.second;
        dis[r][c] = 0;
        
        int rr[4] = {-1, 0, 1, 0}; 
        int cc[4] = {0, 1, 0, -1}; 
        
        while(!pq.empty()){
            int di = pq.top().first;
            int rw = pq.top().second.first;
            int cl = pq.top().second.second;
            pq.pop();
            
            for(int i=0; i<4; i++){
                int nrow = rw + rr[i];
                int ncol = cl + cc[i];
                
                if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && grid[nrow][ncol]==1){
                    if(di+grid[nrow][ncol] < dis[nrow][ncol]){
                        dis[nrow][ncol] = di+grid[nrow][ncol];
                        pq.push({di+grid[nrow][ncol], {nrow, ncol}});
                    }
                }
            }
        }
        
        int dr = destination.first;
        int dc = destination.second;
        
        if(dis[dr][dc] == INT_MAX) return -1;
        else return dis[dr][dc];
        
    }
};





//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}
// } Driver Code Ends
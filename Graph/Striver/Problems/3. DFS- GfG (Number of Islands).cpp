//https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find_the_number_of_islands

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  void dfs(int row, int col, vector< vector<int> > &vis, vector<vector <char>> &grid){
         int n = grid.size();
         int m = grid[0].size();
     
         vis[row][col] = 1;
          
         for(int i=-1; i<=1; i++){
              for(int j=-1; j<=1; j++){
                  int nrow = row+i;
                  int ncol = col+j;
                  
                  if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
                  && grid[nrow][ncol]=='1' && vis[nrow][ncol]==0){
                        dfs(nrow, ncol, vis, grid);
                  }
              }
         }
         
  }
  
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        //visited
        int n = grid.size();
        int m = grid[0].size();
        
        vector< vector<int> > vis(n, vector<int> (m, 0));
        int cnt=0;
        
        for(int row=0; row<n; row++){
            for(int col=0; col<m; col++){
                if(grid[row][col] == '1' && vis[row][col] == 0){
                    cnt++;
                    dfs(row, col, vis, grid);
                }
            }
        }
    
        return cnt;    
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends
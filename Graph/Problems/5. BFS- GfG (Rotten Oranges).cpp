//https://practice.geeksforgeeks.org/problems/rotten-oranges2536/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotten_oranges

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int vis[n][m];
        memset(vis, 0, sizeof(vis));
        
        queue< pair<pair<int, int>, int> > q;
        int cnt_fresh=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2){
                    q.push({{i, j}, 0});
                    vis[i][j]=2;
                }
                if(grid[i][j]==1){
                    cnt_fresh++;
                }
            }
        }
        
        int r[4] = {-1, 0, +1, 0};
        int c[4] = {0, +1, 0, -1};
        
        int time = 0;
        int cnt=0;
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int tim = q.front().second;
            time = max(tim, time);
            q.pop();
            
            for(int i=0; i<4; i++){
                int nrow = row+r[i];   
                int ncol = col+c[i];
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
                   vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    
                    vis[nrow][ncol]=2;
                    cnt++;
                    q.push({{nrow, ncol}, tim+1});
                            
                }
            }
        }
        
        if(cnt_fresh != cnt) return -1;
        else return time;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
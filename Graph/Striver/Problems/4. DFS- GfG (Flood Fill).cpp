//https://practice.geeksforgeeks.org/problems/flood-fill-algorithm1856/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=flood-fill-algorithm

class Solution {
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor, int initial_color,
        vector<vector<int>> &ans){
        
        ans[sr][sc] = newColor;
        
        int n = image.size();
        int m = image[0].size();
        
        int r[] = {-1, 0, 1, 0};
        int c[] = {0, 1, 0, -1};
        
        for(int i=0; i<4; i++){
                int nrow = sr + r[i];
                int ncol = sc + c[i];
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m
                    && image[nrow][ncol]==initial_color && ans[nrow][ncol]!=newColor){
                        dfs(image, nrow, ncol, newColor, initial_color, ans);
                }
        }
    }
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int initial_color = image[sr][sc];
        vector<vector<int>> ans = image;
        
        dfs(image, sr, sc, newColor, initial_color, ans);
        
        return ans;
    }
};
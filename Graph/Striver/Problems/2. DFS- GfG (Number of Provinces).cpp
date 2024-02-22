//https://practice.geeksforgeeks.org/problems/number-of-provinces/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number_of_provinces

class Solution {

  void dfs(int start, vector<int> adjList[], int visited[]){
      visited[start] = 1;
      
      for(auto it : adjList[start]){
          if(visited[it] == 0){
            dfs(it, adjList, visited);
          }
      }
  }
  
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        //adjMatrix to adjList
        vector<int> adjList[V];
        
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(adj[i][j] == 1 && i!=j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        
        //dfs
        int visited[V]={0};
        int cnt=0;
        
        for(int i=0; i<V; i++){
            if(visited[i]==0){
                cnt++;
                dfs(i, adjList, visited);
            }
        }
        
        return cnt;
        
    }
};
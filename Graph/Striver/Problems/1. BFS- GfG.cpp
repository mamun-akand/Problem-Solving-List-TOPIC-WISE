//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bfs_of_graph
   
   #include<bits/stdc++.h>
   using namespace std;

    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
         int node = V;
         int visited[node]={0};
         queue <int> q;
         
         int start = 0;
         q.push(start);
         visited[start]=1;
         
         vector<int> bfs;
         
         while(!q.empty()){
            int last = q.front();
            q.pop();
            bfs.push_back(last);
            
            for(auto it : adj[last]){
               if(visited[it] == 0){
                  visited[it]=1;
                  q.push(it);
               }
            }
         }  
         
         return bfs;
    }
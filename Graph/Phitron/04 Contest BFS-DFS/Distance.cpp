#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adjList[N];

void bfs(int source, int visited[], int level[]){
   queue <int> q;
   q.push(source);
   visited[source]=1;
   level[source] = 0;
      
   while(!q.empty()){
      int last = q.front();
      q.pop();
      
      for(auto it : adjList[last]){
         if(visited[it] == 0){
            q.push(it);
            visited[it]=1;
            level[it] = level[last]+1; 
         }
      }
   }  
}

int main(){
   //adjList
   int node, edge; cin>>node>>edge;
   
   for(int i=0; i<edge; i++){
      int n1, n2; cin>>n1>>n2;
      adjList[n1].push_back(n2);
      adjList[n2].push_back(n1);
   } 
   
   //bfs
   int q; cin>>q;
   while(q--){
      int visited[N] = {0};      
      int level[N] = {0};
      
      int s, d; cin>>s>>d;
      bfs(s, visited, level);
      
      if(visited[d] == 1){
         cout << level[d] << endl;
      }else{
         cout << -1 << endl;
      }
   }
}
#include<bits/stdc++.h>
using namespace std;
vector<int> bfs_ans;
int level[1005];

void bfs(int source, int *visited, vector<int> *adjList){
   queue <int> q;

   q.push(source);
   visited[source]=1;
      
   while(! q.empty()){
      int last = q.front();
      q.pop();
      bfs_ans.push_back(last);
      
      for(auto it : adjList[last]){
         if(visited[it] == 0){
            q.push(it);
            visited[it]=1;
         }
      }
   }  
}

int main(){
   //adjList
   int node, edge; cin>>node>>edge;
   
   vector<int> adjList[node+1];
   for(int i=0; i<edge; i++){
      int n1, n2; cin>>n1>>n2;
      adjList[n1].push_back(n2);
      adjList[n2].push_back(n1);
   } 
   
   //bfs
   int visited[node+1]={0};
   bfs(1, visited, adjList);
   
   //Print BFS
   for(auto it:bfs_ans){
      cout << it << " ";
   } 
}




/*

input:
10
9
1 2
1 3
1 10
2 4
3 5
3 6
4 7
4 8
6 9

Output:
1 2 3 10 4 5 6 7 8 9 
*/
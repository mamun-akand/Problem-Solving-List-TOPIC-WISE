#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int level[N]; //For tree and graph both

void bfs(int source, int *visited, vector<int> *adjList){
   queue <int> q;
   q.push(source);
   visited[source]=1;
   level[source] = 0;
      
   while(! q.empty()){
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
   
   vector<int> adjList[N];
   for(int i=0; i<edge; i++){
      int n1, n2; cin>>n1>>n2;
      adjList[n1].push_back(n2);
      adjList[n2].push_back(n1);
   } 
   
   int k; cin>>k;
   
   //bfs
   int visited[N]={0};
   bfs(k, visited, adjList);

   int cnt=0;
   for(int i=0; i<N; i++){
      if(level[i] == 1){
         cnt++;
      }
   }
   cout << cnt << endl;    
}




/*

input:
3 2
0 2
0 1
1

Output: 1 2

*/
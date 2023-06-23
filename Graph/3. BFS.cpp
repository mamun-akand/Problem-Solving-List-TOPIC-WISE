#include<bits/stdc++.h>
using namespace std;

int main(){
   //adjList
   int node, edge; cin>>node>>edge;
   vector<int> adjList[node+1];
   
   for(int i=0; i<edge; i++){
      int n1, n2; cin>>n1>>n2;
      adjList[n1].push_back(n2);
      adjList[n2].push_back(n1);
   } 
   
   //BFS
   int visited[node+1]={0};
   queue <int> q;
   
   int start = 1;
   q.push(start);
   visited[start]=1;
   
   vector<int> bfs;
   
   while(! q.empty()){
      int last = q.front();
      q.pop();
      bfs.push_back(last);
      
      for(auto it : adjList[last]){
         if(visited[it] == 0){
            visited[it]=1;
            q.push(it);
         }
      }
   }  
   
   //Print BFS
   for(auto it:bfs){
      cout << it << " ";
   } 
}




/*

input:
9 9
1 2
1 6
2 3
2 4
4 5
5 8
6 7
6 9
7 8

Output:
1 2 6 3 4 7 9 5 8 

*/
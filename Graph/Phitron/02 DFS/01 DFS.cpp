#include<bits/stdc++.h>
using namespace std;
#define vll vector<int>

void dfs(int source, vll *adjList, int *visit, vll &dfs_ans){
   //sectoin 1: actions on vertex just after entering a vertex
   visit[source] = 1;
   dfs_ans.push_back(source);
   
   for(auto v : adjList[source]){
      // section 2: actoins on child before entering a new child
      if(visit[v] == 0){
         dfs(v, adjList, visit, dfs_ans);
         // section 3: actoins on child after exiting a child node
      }
   }
   // section 4: actoins on vertex before exiting the vertex u
   return;
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
   //DFS
   int visit[node+1]={0};
   vector<int> dfs_ans;
   
   int start=1;
   dfs(start, adjList, visit, dfs_ans);
   
   //Print DFS
   for(auto it:dfs_ans){
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
1 2 4 7 8 3 5 6 9 10 

*/
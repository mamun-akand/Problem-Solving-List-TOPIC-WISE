#include<bits/stdc++.h>
using namespace std;
#define vll vector<int>

void dfs(int u, vll *adjList, int *visit, vll &dfs_ans){
   //sectoin 1: actions after entering a node 
   visit[u] = 1;
   dfs_ans.push_back(u);
   
   for(auto v : adjList[u]){
      // section 2: actoins before entering a new neighbour
      if(visit[v] == 0){
         dfs(v, adjList, visit, dfs_ans);
      }
      // section 3: actoins after exiting a neighbour
   }
   // section 4: actoins before exiting node u
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
8 8
1 2
2 5
2 6
1 3
3 4
4 8
8 7
7 3

Output:
1 2 5 6 3 4 8 7 

*/
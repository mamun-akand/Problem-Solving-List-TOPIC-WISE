#include<bits/stdc++.h>
using namespace std;
#define vll vector<int>
const int N = 1e5;
int depth[N+1]; //for depth of tree
int height[N+1]; //for height of tree

void dfs(int u, vll *adjList, int *visit, vll &dfs_ans){
   //sectoin 1: actions on vertex just after entering a vertex
   visit[u] = 1;
   dfs_ans.push_back(u);
   
   for(auto v : adjList[u]){
      // section 2: actoins on child before entering a new child
      if(visit[v] == 0){
         depth[v] = depth[u] + 1; // for depth of tree
         dfs(v, adjList, visit, dfs_ans);
         // section 3: actoins on child after exiting a child node
         // Here u = parent and v = child
         height[u] = max(height[u], height[v]+1);
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
   cout << endl;
   
   for(int i = 1; i<=node; i++){
      cout<<"depth of "<<i<<' '<<depth[i]<<endl;
   }
   
   for(int i = 1; i<=node; i++){
      cout<<"Height of "<<i<<' '<<height[i]<<endl;
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
depth of 1 0
depth of 2 1
depth of 3 1
depth of 4 2
depth of 5 2
depth of 6 2
depth of 7 3
depth of 8 3
depth of 9 3
depth of 10 1

*/
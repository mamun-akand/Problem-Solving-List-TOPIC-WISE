//Question 2: You will be given an adjacency matrix for a directed graph (index starting from 1) as input. Now, convert it to an adjacency list and print it.

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 1e5;
vector<ll> adjList[N];

int main(){
   ll n; cin>>n;
   ll adjMatrix[n+1][n+1];
   
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=n; j++){
         cin>>adjMatrix[i][j];  
      }
   }
   
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=n; j++){
          if(adjMatrix[i][j]==1){
             adjList[i].push_back(j);
          }  
      }
   }
   
   for(ll i=1; i<=n; i++){
      cout << "List " << i << " : ";
      for(auto x:adjList[i]){
         cout << x << " ";
      }
      cout << endl;
   }
}

/*In:
5
0 0 0 0 0
1 0 0 1 1
1 1 0 1 1
1 1 1 0 0
0 0 1 0 0

Out:
List 1 : 
List 2 : 1 4 5
List 3 : 1 2 4 5
List 4 : 1 2 3
List 5 : 3*/


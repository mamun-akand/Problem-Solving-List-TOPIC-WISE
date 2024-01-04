// Scenario 1.5

#include<bits/stdc++.h>
using namespace std;

int main(){
   
   vector<vector<int>> vv;
   int n; cin>>n;
   
   for(int i=0; i<n; i++){
      int x,y,z,u,v; cin>>x>>y>>z>>u>>v;
      // vv.push_back({z,y,u,x,v});
      vv.push_back(vector<int>({z,y,u,x,v}));
   }
   
   sort(vv.begin(), vv.end());
   
   for(auto it:vv){
      cout << it[3] <<" "<< it[1] <<" "<< it[0] <<" "<< it[2] <<" " <<" "<< it[4] << endl;
   }
}
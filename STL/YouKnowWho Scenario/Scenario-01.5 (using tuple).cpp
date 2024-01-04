// Scenario 1.5: You are given n≤105n≤105 5D points of the form (x,y,z,u,v)(x,y,z,u,v). Sort the points first based on their zz coordinate. In case of ties then based on their yy coordinate, and still in case of ties then based on their uu coordinate. And still in case of ties then based on their xx coordinate. And finally still in case of ties then based on their vv coordinate. How will you do it?

#include<bits/stdc++.h>
using namespace std;

int main(){
   
   vector<tuple<int, int, int, int, int>> vv;
   int n; cin>>n;
   
   for(int i=0; i<n; i++){
      int x,y,z,u,v; cin>>x>>y>>z>>u>>v;
      vv.push_back({make_tuple(z,y,u,x,v)});
   }
   
   sort(vv.begin(), vv.end());
   
   for(auto [z,y,u,x,v]:vv){
      cout << x <<" "<< y << " " << z << " " << u << " " << v << endl;
   }
   
   //Using get<pos>() to access
   
   cout << endl;
   
   for(auto it : vv){
      cout << get<3>(it) << " " << get<1>(it) << " " << get<0>(it) << " " << get<2>(it) << " " << get<4>(it) << endl;
   }
}
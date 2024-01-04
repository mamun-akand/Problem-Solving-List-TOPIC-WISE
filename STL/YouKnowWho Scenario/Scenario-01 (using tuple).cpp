// Scenario 1: You are given a list of 2D integer coordinates. You have to sort them based on their distance from the origin. How will you do it?

#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<tuple<double, int, int>> v;
   int n; cin>>n;
   
   for(int i=0; i<n; i++){
      int x, y; cin>>x>>y;
      v.push_back({sqrt(x*x+y*y),x,y});
   }
   
   sort(v.begin(), v.end());
   
   for(auto [dis,x,y]:v){
      cout << x <<" "<< y << endl;
   }
}
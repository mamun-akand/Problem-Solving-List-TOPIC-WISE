//Scenario 5: Kth Smallest in Each Prefix You are given a list of integers. You have to find the kth smallest integer for each prefix. How will you do it?
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   ll n, k; cin>>n>>k;
   
   vector<int> v(n+1); 
   for(ll i=1; i<=n; i++){
      cin>>v[i];
   }
   
   priority_queue<int> q;
   
   for(ll i=1; i<=n; i++){
      q.push(v[i]);
      if(q.size()>k) q.pop();
      
      if(i>=k){
         cout << q.top() << " ";
      }
      else{
         cout << -1 << " ";
      }
   }
   
}
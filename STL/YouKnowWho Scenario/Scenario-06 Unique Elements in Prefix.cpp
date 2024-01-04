//Scenario 6: Unique Elements You are given a list of integers. You will have to find the number of unique elements in each prefix. How will you do it?

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   ll n; cin>>n;
   
   vector<int> v(n+1); 
   for(ll i=1; i<=n; i++){
      cin>>v[i];
   }
   
   unordered_set<int> s;
   
   for(ll i=1; i<=n; i++){
      s.insert(v[i]);
      cout << s.size() << endl;
   }
   
}
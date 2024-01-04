//Sliding Window: Maximum of All Subarrays of Length K

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct DS{
   multiset<ll> st;
   
   void insert(ll x){
      st.insert(x);
   }
   
   void erase(ll x){
      st.erase(st.find(x));
   }
   
   ll get_max(){
      return *(--st.end());
   }
}ds;

int main(){
   ll n, k; cin>>n>>k;
   vector<ll> v(n+1);
   for(ll i=1; i<=n; i++){
      cin>>v[i];
   }

   for(ll i=1; i<=n; i++){
      ds.insert(v[i]);
      if(i >= k){
         cout << ds.get_max() << endl;
         ds.erase(v[i-k+1]);
      }
   }
}




/*
Input:
7 4
2 6 4 3 6 8 9

Output:
6
6
8
9
*/
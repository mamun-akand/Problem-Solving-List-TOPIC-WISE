#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   ll n, m; cin>>n>>m;
   
   multiset <ll> st;
   for(ll i=0; i<n; i++){
      ll x; cin>>x;
      st.insert(x);
   }
   
   vector <ll> v(m);
   for(ll i=0; i<m; i++){
      cin>>v[i];
   }
   
   for(ll i=0; i<m; i++){
      auto it = st.find(v[i]);
      if(it != st.end()) st.erase(it);
   }
   
   cout << st.size() << endl;
}
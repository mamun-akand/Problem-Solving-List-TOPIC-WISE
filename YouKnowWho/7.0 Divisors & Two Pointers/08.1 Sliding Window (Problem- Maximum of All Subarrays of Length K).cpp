//Sliding Window: Maximum of All Subarrays of Length K

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   ll n, k; cin>>n>>k;
   vector<ll> v(n+1);
   for(ll i=1; i<=n; i++){
      cin>>v[i];
   }

   multiset<ll> st;
   for(ll i=1; i<=n; i++){
      st.insert(v[i]);
      if(i>=k){
         cout << *(--st.end()) << endl;
         st.erase(st.find(v[i-k+1]));
      }
   }
}
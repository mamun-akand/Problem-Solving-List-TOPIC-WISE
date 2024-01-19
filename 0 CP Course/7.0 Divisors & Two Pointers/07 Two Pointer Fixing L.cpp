// https://vjudge.net/contest/579458#problem/O
#include<bits/stdc++.h>
using namespace std;	
#define   ll    long long
#define   vll   vector <ll>	

int main(){
   ll n; cin>>n;
   vll v(n); for(auto &it:v) cin>>it;
   
   set<ll> st;
   ll ans = 0, R=0;
   
   for(ll L=0; L<n; L++){
      while(R<n and st.find(v[R]) == st.end()){
         st.insert(v[R]);
         R++;
         ans = max(ans, (ll)st.size());
      }
      st.erase(v[L]);
   }
   cout << ans << endl;
}
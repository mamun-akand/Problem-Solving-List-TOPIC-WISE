// URL: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   ll n, k; cin>>n>>k;
   vector<ll> v(n+1); 
   for(ll i=1; i<=n; i++) cin>>v[i];
   
   multiset<ll> st;
   ll R=1, ans = 0;
   
   for(ll L=1; L<=n; L++){
      while(R<=n){
         st.insert(v[R]);
         if(*(--st.end()) - *st.begin() > k){
            st.erase(st.find(v[R]));
            break;
         }
         R++;
      }
      ans += R-L;
      st.erase(st.find(v[L]));
   }
   cout << ans << endl;
}
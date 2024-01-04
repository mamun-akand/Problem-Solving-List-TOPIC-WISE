// URL: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct DS {
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
   ll get_min(){
      return *st.begin();
   }
   ll get_dif(){
      return get_max() - get_min();
   }
};

int main(){
   ll n, k; cin>>n>>k;
   vector<ll> v(n+1); 
   for(ll i=1; i<=n; i++) cin>>v[i];
   
   DS ds;
   ll R=1, ans = 0;
   
   for(ll L=1; L<=n; L++){
      while(R<=n){
         ds.insert(v[R]);
         if(ds.get_dif() > k){
            ds.erase(v[R]);
            break;
         }
         R++;
      }
      ans += R-L;
      ds.erase(v[L]);
   }
   cout << ans << endl;
}
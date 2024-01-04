// URL: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   ll n, s; cin>>n>>s;
   vector<ll> v(n); for(auto &it:v) cin>>it;
   
   ll R=0, sum=0, ans=0;
   
   for(ll L=0; L<n; L++){
      while(R<n and sum+v[R] <= s){
         sum += v[R];
         R++;
      }
      ans += R-L;
      sum -= v[L];
   }
   
   cout << ans << endl;
}
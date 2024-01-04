// URL: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
   ll n, s; cin>>n>>s;
   vector<ll> v(n); for(auto &it:v) cin>>it;
   
   ll L=0, R=0, sum=0, ans=0;
   while(R<n){
      if(sum + v[R] <= s){
         sum += v[R];
         ans = max(ans, R-L+1);
         R++;
      }
      else{
         sum -= v[L];
         L++;
      }
   }
   cout << ans << endl;
}
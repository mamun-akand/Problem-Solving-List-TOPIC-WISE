//URL: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct stacck{
   vector<ll> s, smin{LLONG_MAX}, smax{LLONG_MIN};
   
   void push(ll x){
      s.push_back(x);
      smin.push_back(min(smin.back(), x));
      smax.push_back(max(smax.back(), x)); 
   }
   
   ll pop(){
      ll val = s.back();
      s.pop_back();
      smin.pop_back();
      smax.pop_back();
      return val;
   }
   
   bool empty(){
      return s.empty();
   }
   
   ll maxx(){
      return smax.back();
   }
   
   ll minn(){
      return smin.back();
   }
};

stacck s1, s2;

void add(ll x){
   s1.push(x);
}

void remove(){
   if(s2.empty()){
      while(!s1.empty()){
         s2.push(s1.pop());
      }
   }
   s2.pop();
}

ll k;

bool good(){
   ll Max = max(s1.maxx(), s2.maxx());
   ll Min = min(s1.minn(), s2.minn());
   return Max-Min <= k;
}

int main(){
   ll n; cin>>n>>k;
   vector<ll> v(n); for(auto &it:v) cin>>it;
   
   ll l=0, ans=0;
   for(ll r=0; r<n; r++){
      add(v[r]);
      while(!good()){
         remove();
         l++;
      }
      ans += r-l+1;
   }
   cout << ans << endl;
}
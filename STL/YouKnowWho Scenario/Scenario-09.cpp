#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
      x += 0x9e3779b97f4a7c15;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
      x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
      return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const {
      static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
      return splitmix64(x + FIXED_RANDOM);
  }
};


int main(){
   ll n; cin>>n;
   
   vector<ll> v(n); for(auto &it:v) cin>>it;
   unordered_map<ll, ll, custom_hash> mp;
   
   for(ll i=0; i<n; i++){
      mp[v[i]]++;
   }
   
   ll sum = 0;
   
   for(auto [x,y] : mp){
      sum += x*y;
   }
   
   cout << sum << endl;
}
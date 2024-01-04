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
   ll q; cin>>q;
   unordered_map<ll, ll, custom_hash> mp;
   
   for(ll i=0; i<q; i++){
      string s; ll n; cin>>s>>n;
      if(s == "add"){
         mp[n]++;
      }
      else{
         if(mp.find(n) != mp.end()){
            mp[n]--;
            if(mp[n] == 0) mp.erase(n);
         }
      }
      cout << mp.size() << " ";
   }
}
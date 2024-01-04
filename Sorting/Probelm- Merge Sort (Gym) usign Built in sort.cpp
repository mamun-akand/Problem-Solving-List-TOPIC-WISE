#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> v;

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   ll n; cin>>n;
   for(ll i=0; i<n; i++){
      ll x; cin>>x; 
      v.push_back(x);
   }
   
   sort(v.begin(), v.end());
   
   for(auto it : v){
      cout << it << ' ';
   }
}

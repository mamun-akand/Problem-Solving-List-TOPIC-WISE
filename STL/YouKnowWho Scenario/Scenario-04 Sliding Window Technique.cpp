#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   ll n, k; cin>>n>>k;
   vector<int> v(n); for(auto &it:v) cin>>it;
   
   queue<int> q;
   ll sum = 0;
   
   for(ll i=0; i<n; i++){
      sum += v[i];
      q.push(v[i]);
      if(i >= k-1){
         cout << sum << endl;
         sum -= q.front();
         q.pop();
      }
   }
}
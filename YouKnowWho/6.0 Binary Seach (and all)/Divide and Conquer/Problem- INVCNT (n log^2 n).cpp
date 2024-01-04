//URL: https://www.spoj.com/problems/INVCNT/en/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll N = 2e5+9;
ll ara[N];

ll divide(ll low, ll high){
   if(low >= high) return 0;
   ll mid = low + (high-low)/2;
   
   ll cnt=0;
   
   //divide
   cnt += divide(low, mid);
   cnt += divide(mid+1, high);
   
   //conquer
   vector<ll> v;
   for(ll i=mid+1; i<=high; i++){
      v.push_back(ara[i]);
   }
   sort(v.begin(), v.end());
   
   for(ll i=low; i<=mid; i++){
      cnt += lower_bound(v.begin(), v.end(), ara[i]) - v.begin();
   }
   
   return cnt;
}
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   ll t; cin>>t;
   while(t--){
      ll n; cin>>n;
      for(ll i=0; i<n; i++) cin>>ara[i];
      ll cnt = divide(0, n-1);
      cout << cnt << endl; 
   }
}
//tc: O(n log^2 n)
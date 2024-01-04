//URL: https://www.spoj.com/problems/INVCNT/en/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll N = 2e5+9;
ll ara[N];

ll merge(ll low, ll mid, ll high){
   ll i=low, j=mid+1;
   ll cnt=0;
   vector<ll> temp;
   while(i<=mid and j<=high){
      if(ara[i] <= ara[j]){
         temp.push_back(ara[i]);
         i++;
      }
      else{
         temp.push_back(ara[j]);
         cnt += (mid-i+1);
         j++;
      }
   }
   while(i<=mid){
      temp.push_back(ara[i]);
      i++;
   }
   while(j<=high){
      temp.push_back(ara[j]);
      j++;
   }
   for(ll i=low, j=0; i<=high; i++, j++){
      ara[i] = temp[j];
   }
   
   return cnt;
}

ll merge_sort(ll low, ll high){
   if(low >= high) return 0;
   ll mid = low + (high-low)/2;
   ll cnt=0;
   
   cnt += merge_sort(low, mid);
   cnt += merge_sort(mid+1, high);
   cnt += merge(low, mid, high);
   
   return cnt;
}
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   ll t; cin>>t;
   while(t--){
      ll n; cin>>n;
      for(ll i=0; i<n; i++) cin>>ara[i];
      ll cnt = merge_sort(0, n-1);
      cout << cnt << endl; 
   }
}
//tc: O(n log n)
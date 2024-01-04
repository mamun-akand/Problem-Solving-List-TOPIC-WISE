//https: vjudge.net/problem/Gym-324997D


// Speciality:
// TLE,if Fast not use

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> merge(vector<ll> &l, vector<ll> &r){
   ll n = l.size(), m = r.size();
   vector<ll> merged_vector;
   
   ll i=0, j=0;
   while(i<n and j<m){
      if(l[i] <= r[j]){
         merged_vector.push_back(l[i]);
         i++;
      }
      else{
         merged_vector.push_back(r[j]);
         j++;
      }
   }
   
   while(i<n){
      merged_vector.push_back(l[i]);
      i++;
   }
   while(j<m){
      merged_vector.push_back(r[j]);
      j++;
   }
   return merged_vector;
}

vector<ll> v;

vector<ll> merge_sort(ll L, ll R){
   if(L==R) return {v[L]};
   ll mid = L+(R-L)/2;
   
   vector<ll> L_merged = merge_sort(L, mid);
   vector<ll> R_merged = merge_sort(mid+1, R);
   
   return merge(L_merged, R_merged);
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   ll n; cin>>n;
   for(ll i=0; i<n; i++){
      ll x; cin>>x; 
      v.push_back(x);
   }
   vector<ll> ans_vector = merge_sort(0, n-1);
   for(auto it : ans_vector){
      cout << it << ' ';
   }
}

// Speciality
// TLE,if Fast not use
//Sliding Window: You are given an array aa of length nn and an integer kk. You have to find the number of unique elements in all subarrays of length kk.

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   ll n, k; cin>>n>>k;
   vector<ll> v(n+1);
   for(ll i=1; i<=n; i++){
      cin>>v[i];
   }

   map<ll,ll> mp;
   for(ll i=1; i<=n; i++){
      mp[v[i]]++;
      if(i>=k){
         cout << mp.size() << endl;
         mp[v[i-k+1]]--;
         if(mp[v[i-k+1]] == 0){
            mp.erase(v[i-k+1]);
         }
      }
   }
}


/*

Input:
7 4
2 6 4 3 4 4 9

Output:
4
3
2
3

*/
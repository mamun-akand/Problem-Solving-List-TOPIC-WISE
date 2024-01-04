//Sliding Window: You are given an array aa of length nn and an integer kk. You have to find the maximum of all subarrays of length kk.

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   ll n, k; cin>>n>>k;
   vector<ll> v(n+1);
   for(ll i=1; i<=n; i++){
      cin>>v[i];
   }

   multiset<ll> st;
   for(ll i=1; i<=n; i++){
      st.insert(v[i]);
      if(i>=k){
         cout << *(--st.end()) << endl;
         st.erase(st.find(v[i-k+1]));
      }
   }
}

/*
Input:
7 4
2 6 4 3 6 8 9

Output:
6
6
8
9
*/
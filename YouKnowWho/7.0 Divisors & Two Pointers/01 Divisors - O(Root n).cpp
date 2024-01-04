#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   ll n=25;
   vector<ll> v;
   for(ll i=1; i*i <= n; i++){
      if(n%i==0){
         v.push_back(i);
         if(i != n/i){
            v.push_back(n/i);
         }
      }
   }
   
   //print
   sort(v.begin(), v.end());
   for(ll i=0; i<(ll)v.size(); i++){
      cout << v[i] << ' ';
   }
}
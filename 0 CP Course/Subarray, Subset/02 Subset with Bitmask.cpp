#include<bits/stdc++.h>
using namespace std;

#define   ll   long long int
#define   vll	vector <ll>	
#define   vp(v)for(auto it:v){cout << it <<" ";}

int main(){
   ll n; cin>>n;
   vll v(n); for(auto &it:v) cin>>it;
   
   for(ll mask=0; mask<=pow(2, n); mask++){
      for(ll i=0; i<n; i++){
         if(mask & (1<<i)){
            cout << v[i] << " ";
         }
      }
      cout << endl;
   }
   
}
//Solve this problem: You are given n≤20n≤20 numbers, each from 11 up to 109109. Is there a subset with a sum equal to a given goal s≤109s≤109? Ask me to check if your solution is correct.

#include<bits/stdc++.h>
using namespace std;

#define   ll   long long int
#define   vll	vector <ll>	
#define   vp(v)for(auto it:v){cout << it <<" ";}

int main(){
   ll n, s; cin>>n>>s;
   vll v(n); for(auto &it:v) cin>>it;
   
   for(ll mask=0; mask<=pow(2,n); mask++){
      ll sum = 0;
      for(ll i=0; i<n; i++){
         if(mask & (1<<i)) sum+=v[i];
      }
      if(sum==s){
         cout << "Exist" << endl;
         return 0;
      }
   }
   cout << "Not Exist" << endl;

}
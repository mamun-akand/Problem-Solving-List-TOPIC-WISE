/*Consider this problem: You are given N≤20 numbers, each up to 10^9. Is there a subset with sum equal to given goal S?*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
   ll n; cin>>n;
   ll s; cin>>s;
   vector <ll> v(n);
   
   for(ll i=0; i<n; i++){
      cin >> v[i];
   }
   
   for(ll mask=0; mask <= ((1<<n)-1); ++mask){
      ll sum=0;
      for(ll pos=0; pos<n; pos++){
         if((mask & (1<<pos))) sum += v[pos];
      }
            
      if(sum == s){
         cout << s << " sum is present" << endl;
         return 0;   
      }
      
   }
   
   cout << s << " sum is NOT present" << endl;

   return 0;
}
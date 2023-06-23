#include<bits/stdc++.h>
using namespace std;

int main(){
   FAST;
   
   ll n, cnt=0; cin>>n;
   int presence[1023+5] = {0};
   
   while(n--){
      string x; cin>>x;
      ll mask = 0;
      for(ll i=0; i<x.size(); i++){
         mask = (mask | (1 << (x[i]-'0'))); 
      }
      presence[mask]++;
      if(mask==1023) cnt++;
   }
   
   ll ans = 0;
   
   for(ll i=0; i<=1023; i++){
      for(ll j=i+1; j<=1023; j++){
         if((i | j)==1023)
            ans += (1LL*presence[i]*presence[j]);
      }
   }
   
   ans += (cnt*(cnt-1))/2;
   pa;
   
   SpicyWings;
}
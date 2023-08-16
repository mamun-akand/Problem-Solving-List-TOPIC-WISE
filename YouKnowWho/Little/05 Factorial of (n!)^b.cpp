#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   
   int n = 100, b = 1e5, mod = 1e9+7;
   
   //calculate (n!)
   int fact = 1;
   for(int i=1; i<=n; i++){
      fact = 1LL*fact*i % mod;
   }
   
   //calculate (n!)^b
   ll ans=1;
   for(ll i=0; i<b; i++){
      ans = (1LL*ans*fact)%mod;
   }
   
   cout << ans << endl;
}
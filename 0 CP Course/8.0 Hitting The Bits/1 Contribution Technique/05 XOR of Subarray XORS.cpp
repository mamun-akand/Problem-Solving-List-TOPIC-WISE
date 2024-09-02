#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  
   ll n; cin>>n;
   int ara[n+1];
   for(ll i=1; i<=n; i++){
   	cin>>ara[i];
   }
   
   ll ans=0;
     
   // contribution method, efficient: O(n)
   // contribution: i*(n-i+1), if odd then, contribution in xor = 1, else 0
   
   for(ll i=1; i<=n; i++){
   	ll contribution = i*(n-i+1);
   	if(contribution % 2 == 1){
   		ans ^= ara[i];
   	}
   }
   cout << ans << endl;
   
}






















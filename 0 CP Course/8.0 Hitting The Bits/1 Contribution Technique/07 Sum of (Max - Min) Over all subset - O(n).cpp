#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
   ll n; cin>>n;
   ll ara[n+1];
   for(ll i=1; i<=n; i++){
   	cin>>ara[i];
   }
   ll ans=0;
   // contribution method, efficient: O(n)
   // contribution: contr of max val = ara[i] * 2^(i-1), min val = ara[i] * 2^(n-i)
   sort(ara+1, ara+n+1);
   ll Max=0, Min=0;
   for(ll i=1; i<=n; i++){
		Max += ara[i] * (1<<(i-1));		
		Min += ara[i] * ((1<<(n-i)));
   }
   cout << Max - Min << endl;
}
























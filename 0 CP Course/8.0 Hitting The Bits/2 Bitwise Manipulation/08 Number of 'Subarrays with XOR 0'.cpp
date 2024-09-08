#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n; cin>>n;
	ll ara[n+1], pre[n+1]={};
	
	for(ll i=1; i<=n; i++){
		cin>>ara[i];
		pre[i] = pre[i-1] ^ ara[i];
	}
	ll ans=0;
	map<ll,ll> mp;
	mp[pre[0]]++; //input: n=2, elements=3,3. Then it won't get missed.
	for(ll i=1; i<=n; i++){
		ans += mp[pre[i]];
		mp[pre[i]]++;
	}
	cout << ans << endl;
}






















#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n; cin>>n;
	ll ara[n+1];
	vector<ll> cnt(30, 0);
	for(ll i=1; i<=n; i++){
		cin>>ara[i];
		for(ll j=0; j<30; j++){
			if((ara[i] >> j) & 1){
				cnt[j]++;
			}
		}
	}
	ll sum=0;
	for(ll k=0; k<30; k++){
		sum += cnt[k] * (1<<k); // 1<<k = pow(2, i);
	}cout << sum << '\n';
}






















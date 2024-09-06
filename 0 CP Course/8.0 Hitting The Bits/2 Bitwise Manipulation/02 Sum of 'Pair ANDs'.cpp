#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n; cin>>n;
	ll ara[n+1];
	vector<ll> cnt_1(30, 0);
	for(ll i=1; i<=n; i++){
		cin>>ara[i];
		for(ll j=0; j<30; j++){
			if((ara[i] >> j) & 1){
				cnt_1[j]++;
			}
		}
	}
	ll sum=0;
	for(ll k=0; k<30; k++){
		ll contrib = (cnt_1[k] * cnt_1[k]); 
		sum += contrib * (1<<k); //1<<k = pow(2, i);
	}cout << sum << '\n';
}






















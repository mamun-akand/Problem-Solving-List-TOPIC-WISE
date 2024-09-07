#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9+7;

ll powOf2_cal(ll n){
	ll ans=1;
	for(ll i=1; i<=n; i++){
		ans = (ans*2) % mod;
	}
	return ans;
}

int main(){
	ll n; cin>>n;
	ll ara[n+1];
	vector<ll> cnt_1(30, 0), cnt_0(30, 0);
	for(ll i=1; i<=n; i++){
		cin>>ara[i];
		for(ll j=0; j<30; j++){
			if((ara[i] >> j) & 1){
				cnt_1[j]++;
			}else{
				cnt_0[j]++;
			}
		}
	}
	
	ll sum=0;
	for(ll k=0; k<30; k++){
		ll contrib1 = powOf2_cal(cnt_1[k]) - 1; //only 1's Contrib. -1 for empty set
		ll contrib2 = powOf2_cal(cnt_0[k]); //only 1's Contrib. 
		sum += contrib1 * contrib2 * (1<<k);
	}cout << sum << '\n';
}






















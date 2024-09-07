#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n; cin>>n;
	ll ara[n+1];
	vector<ll> cnt_0(30, 0), cnt_1(30, 0);
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
		if(cnt_1[k]==0) continue; //if cnt 1 = 0, then contrib 0
		ll contrib1 = pow(2, cnt_1[k]-1); //1's Contrib
		ll contrib2 = pow(2, cnt_0[k]);  //0's Contrib.
		sum += (contrib1*contrib2) * (1<<k); //1<<k = pow(2, i);
	}cout << sum << '\n';
}






















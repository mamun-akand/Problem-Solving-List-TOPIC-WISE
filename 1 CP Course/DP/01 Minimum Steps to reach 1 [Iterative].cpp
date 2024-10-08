#include<bits/stdc++.h>
using namespace std;
#define	ll long long int

const ll N = 1e5+9;
ll min_steps[N];

int main(){
	ll n; cin>>n;
	min_steps[1] = 0;
	for(ll i=2; i<=n; i++){
		ll ans = LLONG_MAX;
		if(i>1){
			ll choice1 = 1 + min_steps[i-1];
			ans = min(ans, choice1);
		}
		if(i%2==0){
			ll choice2 = 1 + min_steps[i/2];
			ans = min(ans, choice2);
		}
		if(i%3==0){
			ll choice3 = 1 + min_steps[i/3];
			ans = min(ans, choice3);
		}
		min_steps[i] = ans;
	}
	cout << min_steps[n] << endl;
}























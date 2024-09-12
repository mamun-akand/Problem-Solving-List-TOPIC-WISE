// URL: https://vjudge.net/contest/579773#problem/D
#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
//#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================

int main(){
	FAST;
   
	// Test{}
	ll n, l, r, x; cin>>n>>l>>r>>x;
	ll ara[n];
	for(ll i=0; i<n; i++){
		cin>>ara[i];
	}
	ll ans=0;
	for(ll mask=0; mask < (1<<n); mask++){
		ll total_diff = 0, Min = LLONG_MAX, Max=0, cnt=0;
		for(ll i=0; i<n; i++){
			if(mask & (1<<i)){
				total_diff += ara[i];
				Min = min(Min, ara[i]);
				Max = max(Max, ara[i]);
				cnt++;
			}
		}
		if(total_diff >= l and total_diff <=r and (Max - Min) >= x){
			ans++;
		}
	}
	cout << ans << endl;
   
	SpicyWings;
}






















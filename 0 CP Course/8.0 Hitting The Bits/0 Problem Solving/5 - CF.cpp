// URL: https://vjudge.net/contest/579773#problem/E
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
	ll n; cin>>n;
	vll v(n); for(auto &it:v) cin>>it;
	
	for(ll mask=0; mask<(1<<n); mask++){
		ll total=0;
		for(ll i=0; i<n; i++){
			if(mask & (1<<i)){
				total += v[i];
			}else{
				total -= v[i];
			}
		}
		if(total%360 == 0){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
   
	SpicyWings;
}






















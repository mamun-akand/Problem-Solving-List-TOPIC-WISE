// URL: https://vjudge.net/contest/579773#problem/I

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
   
	Test{
		ll n; cin>>n;
		vll v(n); for(auto &it:v) cin>>it;
		
		vll cnt(31, 0);
		for(ll i=0; i<n; i++){
			ll msb = __lg(v[i]);
			cnt[msb]++;
		}
		ll ans=0;
		for(ll i=0; i<31; i++){
			ans += (cnt[i] * (cnt[i]-1)) / 2;
		}
		cout << ans << endl;
	}
   
	SpicyWings;
}






















// URL: https://vjudge.net/contest/579773#problem/G

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
		ll ans=0;
		// for(ll k=0; k<=31; k++){
			// ll zero=0;
			// for(ll i=0; i<n; i++){
				// if(((v[i]>>k) & 1) == 0){
					// zero++;
				// }
			// }
			// if(zero == 0){
				// ans += (1<<k);
			// }
		// }
		ans = v[0];
		for(ll i=1; i<n; i++){
			ans &= v[i];
		}		
		cout << ans << endl;
	}
   
	SpicyWings;
}






















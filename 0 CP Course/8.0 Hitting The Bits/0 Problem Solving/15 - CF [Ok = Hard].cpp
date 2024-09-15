// URL: https://vjudge.net/contest/579773#problem/O

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
	ll L, R; cin>>L>>R;
	if(L==R){
		cout << 0 << endl;
		return 0;
	}
	ll ans=0; 
	// bool flag = 0;
	for(ll i=62; i>=0; i--){
		// if(flag){
			// ans += (1LL<<i);
			// continue;
		// }
		ll L_bit = ((L>>i)&1);
		ll R_bit = ((R>>i)&1);
		
		if(L_bit != R_bit){
			// ans += (1LL<<i); 
			// flag=1;
			ans = (1LL<<(i+1)) - 1;
			break;
		}
	}
	cout << ans << endl;
   
	SpicyWings;
}






















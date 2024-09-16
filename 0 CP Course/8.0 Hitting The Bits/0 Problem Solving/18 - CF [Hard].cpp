 // URL: https://vjudge.net/contest/579773#problem/R

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
const ll mod = 1e9+7;

int main(){
	FAST;
   
	Test{
		ll n, m; cin>>n>>m;
		ll total_or = 0;
		while(m--){
			ll l,r,x; cin>>l>>r>>x;
			total_or = total_or | x; 
		}
		ll ans = 1;
		for(ll i=1; i<=n-1; i++){
			ans = (ans*2) % mod;
		}
		ans = (ans * total_or)%mod;
		cout << ans << endl;
	}
   
	SpicyWings;
}






















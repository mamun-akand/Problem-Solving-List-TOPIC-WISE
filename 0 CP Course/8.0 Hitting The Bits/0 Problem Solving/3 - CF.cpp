// URL: https://vjudge.net/contest/579773#problem/C

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
	ll n, m, k; cin>>n>>m>>k;
	ll ara[m+1];
	for(ll i=0; i<=m; i++){
		cin >> ara[i];
	}
	ll ans=0;
	for(ll i=0; i<m; i++){
		ll differ = ara[i] ^ ara[m];
		ll differ_count = __builtin_popcount(differ);
		if(differ_count <= k) ans++;
	}
	cout<<ans <<endl;
   
	SpicyWings;
}






















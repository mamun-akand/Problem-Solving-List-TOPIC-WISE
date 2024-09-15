// URL: https://vjudge.net/contest/579773#problem/M

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
const ll N = 2005;
vll v(N), pre_xor(N);
ll get_xor(ll l, ll r){
	return pre_xor[r] ^ pre_xor[l-1]; 
}

int main(){
	FAST;
   
	Test{
		ll n; cin>>n;
		for(ll i=1; i<=n; i++){
			cin >> v[i]; 
		}
		for(ll i=1; i<=n; i++){
			pre_xor[i] = pre_xor[i-1] ^ v[i]; 
		}
		bool found = false;
		for(ll i=1; i<n; i++){
			ll x = get_xor(1, i);
			ll y = get_xor(i+1, n);
			if(x==y) found=true;
		}
		// cout << found << endl;
		for(ll i=1; i<n; i++){
			for(ll j=i+1; j<n; j++){
				ll x = get_xor(1, i);
				ll y = get_xor(i+1, j);
				ll z = get_xor(j+1, n);
				if(x==y && y==z) found=true;
			}
		}
		// cout << found << endl;
		if(found) cout << "YES" << endl;
		else cout << "NO" << endl;	
	}
   
	SpicyWings;
}






















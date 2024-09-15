// URL: https://codeforces.com/problemset/problem/1601/A

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
	// FAST;
   
	Test{
		ll n; cin>>n;
		ll ara[n+1];
		vector<ll> cnt(30, 0);
		for(ll i=1; i<=n; i++){
			cin>>ara[i];
			for(ll j=0; j<30; j++){
				if((ara[i]>>j) & 1){
					cnt[j]++;
				}
			}
		}
		for(ll k=1; k<=n; k++){
			bool ok = true;
			for(ll j=0; j<30; j++){
				if(cnt[j] % k != 0){
					ok = false;
				}
			}
			if(ok) cout << k << " ";
		}
		cout << '\n';
	}
   
	SpicyWings;
}






















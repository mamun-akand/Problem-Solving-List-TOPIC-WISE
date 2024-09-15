// URL: https://vjudge.net/contest/579773#problem/P

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
const ll N = 1e5+9;
vll mask(N, 0);

int main(){
	FAST;
   
	ll n; cin>>n;
	for(ll i=0; i<n; i++){
		string s; cin>>s;
		vector<ll> freq(26, 0);
		for(ll i=0; i<s.size(); i++){
			freq[s[i]-'a']++;
		}
		for(ll k=0; k<26; k++){
			if(freq[k]%2==1) mask[i] += (1<<k);
		}
	}
	ll ans=0;
	map<ll, ll> mp;
	for(ll i=0; i<n; i++){
		ans += mp[mask[i]];
		for(ll k=0; k<26; k++){
			ans += mp[mask[i]^(1<<k)];
		}
		mp[mask[i]]++;
	}
	cout << ans << endl;
   
	SpicyWings;
}






















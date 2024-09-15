// URL: https://vjudge.net/contest/579773#problem/N
#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll	long long
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

const long long mod = (1LL<<32);
const long long M = (1LL<<31);
// vector<bool> exists(M, 0);
bitset<M> exists;
 
int main(){
	FAST;
   	
   	ll q, s, a,b; cin>>q>>s>>a>>b;
	long long sum = 0;
	
	while(q--){
		if(s & 1){
			ll x = s/2;
			if(exists[x]==0){
				exists[x] = true;
				sum += x;
			}
		}else{
			ll x = s/2;
			if(exists[x]==1){
				exists[x] = false;
				sum -= x;
			}
		}
		s = (((a*s)%mod)+b)%mod;
	}
	cout << sum << endl;
   
	SpicyWings;
}






















// URL: https://vjudge.net/contest/579841#problem/D

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
const ll mod = 998244353;
const ll N = 1e5+6;
ll fib[N];

int main(){
	FAST;
   
	ll n; cin>>n;
	fib[1] = 1;
	fib[2] = 1;
	for(ll i=3; i<=n; i++){
		fib[i] = (fib[i-1] + fib[i-2])%mod;
	}
	cout << fib[n] << endl;
   
	SpicyWings;
}






















// URL: https://vjudge.net/contest/579773#problem/F

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
		ll msb;
		// for(ll i=0; i<31; i++){
			// if(n & (1<<i)){
				// msb = i;
			// }
		// }
		
		//// msb = 31 - __builtin_clz(n);		
		msb = __lg(n);		
		cout << (1<<msb)-1 << endl;
	}
   
	SpicyWings;
}






















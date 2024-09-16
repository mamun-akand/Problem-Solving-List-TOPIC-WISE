// URL: https://vjudge.net/contest/579773#problem/S
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
ll ara[N], pre_xor[N];

int main(){
	FAST;
   
	Test{
		ll n; cin>>n;
		for(ll i=1; i<=n; i++){
			cin>>ara[i];
			pre_xor[i] = pre_xor[i-1] ^ ara[i];
		}
		ll cnt_0[31]={0}, cnt_1[31]={0};
		for(ll k=0; k<31; k++){
			cnt_0[k]++;
		}
		ll ans = 0;
		for(ll i=1; i<=n; i++){
			for(ll k=0; k<31; k++){
				ll cur_bit = (pre_xor[i]>>k) & 1;
				if(cur_bit == 1){
					ans += cnt_0[k] * (1<<k);
				}else{
					ans += cnt_1[k] * (1<<k);
				}
			}
			for(ll k=0; k<31; k++){
				ll cur_bit = (pre_xor[i]>>k) & 1;
				if(cur_bit == 1){
					cnt_1[k]++;
				}else{
					cnt_0[k]++;
				}
			}
		}
		cout << ans << endl;
	}
	
	SpicyWings;
}






















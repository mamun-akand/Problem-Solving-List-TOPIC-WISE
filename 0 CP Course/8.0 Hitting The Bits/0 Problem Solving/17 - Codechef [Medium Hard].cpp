// URL: https://vjudge.net/contest/579773#problem/Q
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
const ll N = 1e5 + 9;
const ll MAX_VAL = 4005;
ll a[N], b[N];
bitset<MAX_VAL> prefix_mask_a[N], prefix_mask_b[N];

int main(){
	FAST;
   
	ll n,m,q; cin>>n>>m>>q;
	for(ll i=1; i<=n; i++){
		cin>>a[i];
	}
    for(ll i=1; i<=m; i++){
		cin>>b[i];
	}
	prefix_mask_a[0].reset();
	for(ll i=1; i<=n; i++){
		prefix_mask_a[i] = prefix_mask_a[i-1];
		// prefix_mask_a[i] = prefix_mask_a[i] ^ bitset<MAX_VAL> (1<<a[i]); 
		prefix_mask_a[i].flip(a[i]); 
	}
	prefix_mask_b[0].reset();
	for(ll i=1; i<=m; i++){
		prefix_mask_b[i] = prefix_mask_b[i-1];
		prefix_mask_b[i].flip(b[i]); 
	}
	
	while(q--){
		ll l1, r1, l2, r2; cin>>l1>>r1>>l2>>r2;
		bitset<MAX_VAL> subarray_mask_a = prefix_mask_a[r1] ^ prefix_mask_a[l1-1]; 
		bitset<MAX_VAL> subarray_mask_b = prefix_mask_b[r2] ^ prefix_mask_b[l2-1];
		bitset<MAX_VAL> merged_mask = subarray_mask_a ^ subarray_mask_b;
		
		ll ans_setBit = merged_mask.count();
		cout << ans_setBit << endl;
	}
	
	SpicyWings;
}






















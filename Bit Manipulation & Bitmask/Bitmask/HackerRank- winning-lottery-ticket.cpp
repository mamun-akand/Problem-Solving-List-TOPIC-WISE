#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
#define   vld	vector <ld>
#define   mp	map <ll,ll>
#define   st	set <ll>

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   pi      3.1415926535897932384626433832795
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    "\n"
#define   ln      cout<<"\n";
#define   pb      push_back
#define   eb      emplace_back
#define   rn      return 0;

#define   pa      cout<<ans<<endl
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
   
   ll n, cnt=0; cin>>n;
   int presence[1023+5] = {0};
   
   while(n--){
      string x; cin>>x;
      ll mask = 0;
      for(ll i=0; i<x.size(); i++){
         mask = (mask | (1 << (x[i]-'0'))); 
      }
      presence[mask]++;
      if(mask==1023) cnt++;
   }
   
   ll ans = 0;
   
   for(ll i=0; i<=1023; i++){
      for(ll j=i+1; j<=1023; j++){
         if((i | j)==1023)
            ans += (1LL*presence[i]*presence[j]);
      }
   }
   
   ans += (cnt*(cnt-1))/2;
   pa;
   
   SpicyWings;
}
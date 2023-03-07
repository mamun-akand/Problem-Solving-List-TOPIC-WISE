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

#define   Test    ll tc; cin>>tc; f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<string> &v){for(auto it:v){cout << it <<endl;}}
//=================================================================

int main(){
   // string s; cin>>s;
   
   ll n, l, r, x; cin>>n>>l>>r>>x;
   vll v(n);
   
   for(ll i=0; i<n; i++){
      cin >> v[i];
   }
   
   ll p_set=0;
   
   for(ll sub =0; sub <= (1<<n)-1; sub++){
      if((sub==0) || ((sub&(sub-1))==0)) continue;
      vll v2;
      ll sum = 0;
      for(ll pos=0; pos < n; pos++){
         if(sub & (1<<pos)){
            v2.pb(v[pos]);
            sum += v[pos];  
         }
      }
      ll Max = *max_element(all(v2));
      ll Min = *min_element(all(v2));
      
      if((sum>=l) && (sum<=r) && ((Max-Min)>=x)){
         p_set++;
      }
      
      v2.clear();
   }
   
   cout << p_set << endl;
   
   SpicyWings;
}
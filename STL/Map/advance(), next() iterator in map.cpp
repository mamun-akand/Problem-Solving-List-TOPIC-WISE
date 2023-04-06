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
    
   map<ll, ll> m;
   
   m[1] = 1;
   m[2] = 2;
   m[3] = 3;
   m[4] = 5;

   auto it = m.begin();
   advance(it, 1); //advance() modifies the previous itr to 1 level up.
   cout << (*it).first << " " << (*it).second << endl;
   
   auto it2 = next(it, 2); //next() indicates to 1 next itr & returns new itr.
   cout << (*it2).first << " " << (*it2).second << endl;
   
   
   auto it3 = next(it2, -1);
   cout << (*it3).first << " " << (*it3).second << endl;
   
   
   m.erase(next(it, 1));
   ln;
   for(auto it:m){
      cout << it.first << " " << it.second << endl;
   }


   SpicyWings;
}
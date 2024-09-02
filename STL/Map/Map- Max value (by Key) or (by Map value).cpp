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
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

// bool cmp(pair<ll,ll>a, pair<ll,ll>b){
   // return a.second > b.second;
// }

bool cmp(pair<int, int>a, pair<int, int>b)
{
   return a.second < b.second;
}

int main(){

      map<int, int> m={{5,2},{2,3}, {3,4}};
      
      for(auto it:m){
         cout << it.first << " " << it.second << endl;
      }
   
      // int max_mapval = max_element(m.begin(), m.end(), cmp)->second;
      // cout << "Max map value: " << max_mapval << endl;
      
      // int max_key = max_element(m.begin(), m.end(),cmp)->second;
      // cout << "Key-Max Map Value: " << max_key << endl;
//       
      // //This is how it works. another way.
      auto maxx = max_element(m.begin(), m.end(), cmp);
      cout << maxx->second << endl
           << maxx->first << endl;
      
   SpicyWings;
}


















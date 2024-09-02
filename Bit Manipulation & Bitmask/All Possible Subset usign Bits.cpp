//Subsequence or Subset

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
   ll n; cin>>n;
   
   vll s(n);
   for(ll i=0; i<n; i++){
      cin >> s[i];
   }
   
   for(ll sub = 0; sub <= pow(2,s.size())-1; sub++){
      for(ll pos = 0; pos < n; pos++){
         if(sub & (1<<pos))  cout << s[pos] << " ";
         else cout << 0 << " ";
      }
      ln;
   }
   
   SpicyWings;
}

//TC: O(2^n * n)
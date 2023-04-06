// Problem: A. Broken Keyboard
// URL: https://codeforces.com/contest/1251/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
    
   Test{
      vector<bool> v(26,0);
      string s; cin>>s;
      
      int point=0;
      int cnt=0;
      for(int i=0; i<s.size(); i++){
         if(s[point]==s[i]) cnt++;
         else{
            if(cnt%2==1) v[s[point]-'a'] = 1;
            // cout << cnt << endl;
            point=i;
            cnt=1;
         }
      }
      if(cnt%2==1) v[s[point]-'a'] = 1;
      
      for(ll i=0; i<26; i++){
         if(v[i]==1) cout << char(i+'a');
      }
      ln;
   }
   
   SpicyWings;
}
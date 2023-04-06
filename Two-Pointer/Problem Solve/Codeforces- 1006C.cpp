// Problem: C. Three Parts of the Array
// URL: https://codeforces.com/contest/1006/problem/C
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
    
   ll n; cin>>n;
   vll v(n);
   
   for(ll i=0; i<n; i++) cin >> v[i];
   
   ll l = 0;
   ll r = n-1;
   ll sum1=0, sum2=0, ans=0;
   
   while(l<=r){
      if(sum1<sum2){
         sum1 += v[l];
         l++;
      }
      else {
         sum2 += v[r];
         r--;
      }
      if(sum1==sum2) ans=sum1;
   }
   
   cout << ans << endl;
   SpicyWings;
}
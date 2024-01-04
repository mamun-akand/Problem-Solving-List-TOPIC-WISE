// URL: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   SpicyWings  return 0;
#define   endl    "\n"

#define   ln      cout<<"\n";
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=====================================================================
const ll N = 2e5+100;
string t,p;
vll v(N);

bool monotonic(ll n){
   string s = t;
   for(ll i=1; i<=n; i++){
      ll pos = v[i]-1;
      s[pos] = '*';
   }
   ll p_size = p.size();
   ll start = 0;
   for(ll i=0; i<=(ll)t.size(); i++){
      if(s[i] == p[start]){
         start++; p_size--;
         if(p_size==0) break; 
      }
   }
   return p_size == 0;
}

int main(){
   FAST;
   cin>>t>>p;
   for(ll i=1; i<=(ll)t.size(); i++){
      cin>>v[i];
   }
   
   ll l=0, r=t.size(), ans=0;
   while(l<=r){
      ll mid = l+(r-l)/2;
      if(monotonic(mid)){
         ans = mid;
         l = mid+1;
      }
      else{
         r = mid-1;
      }
   }
   cout << ans << endl;
   SpicyWings;
}
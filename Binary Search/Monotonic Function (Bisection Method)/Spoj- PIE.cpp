// https://www.spoj.com/problems/PIE/
#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
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

#define   vp(v)   for(auto it:v){cout << it <<" ";}
#define   sp(s)   while(!s.empty()){cout<<s.front() <<" ";s.pop();}
//=================================================================

bool possible(vector<double> &vol, ll n, ll f, double mid){
   ll cnt=0;
   for(ll i=0; i<n; i++){
      ll x = vol[i]/mid;
      if(x>0){
         cnt += x;
      }
   }
   return cnt >= f;
}

int main(){
   FAST;
    
   Test{
      ll n, f; cin>>n>>f;
      vll v(n); for(auto &it:v) cin>>it;
      
      double pi = acos(-1), volSum=0;
      vector<double> vol;
      
      for(auto it:v){
         vol.pb(pi*it*it);
         volSum += pi*it*it;
      }
      
      double L=0, R=volSum, ans=0;
      
      while(R-L > 0.0001){
         double mid = L + (R-L)/2.0;
         if(possible(vol, n, f+1, mid)){
            ans = max(ans, mid);
            L = mid;
         }
         else{
            R = mid;
         }
      }
      cout << setp(4);
      cout << ans << endl;
   }
   
   SpicyWings;
}
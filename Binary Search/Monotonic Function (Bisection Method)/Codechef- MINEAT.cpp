//URL: https://www.codechef.com/problems/MINEAT

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

bool possible(vector<ll> &v, ll n, ll h, ll mid){
   ll cnt=0;
   for(ll i=0; i<n; i++){
      cnt += ceil(v[i]/(double)mid);
   }
   
   return cnt <= h;
}

int main(){
   FAST;
    
   Test{
      ll n, h; cin>>n>>h;
      vll v(n); for(auto &it:v) cin>>it;
      
      ll mx = *max_element(all(v));
      
      ll low=1, high=mx, ans=INT_MAX;
      while(low <= high){
         ll mid = low + (high-low)/2;
         if(possible(v, n, h, mid)){
            ans = mid;
            high = mid-1;
         }
         else{
            low = mid+1; 
         }
      }
      cout << ans << endl;
      
   }
   
   SpicyWings;
}
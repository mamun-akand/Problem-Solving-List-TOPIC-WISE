// URL: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

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
#define   SpicyWings  return 0;
#define   endl    "\n"

#define   ln      cout<<"\n";
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=================================================================

int main(){
   FAST;
    
   ll n; cin>>n;
   vll v(n); for(auto &it:v) cin>>it;
   ll flag = -1;
   ll l=0, r=n-1;

   while(l<=r){
      ll mid = l+(r-l)/2;
      
      if(v[mid]==1) {
         flag = mid;
         r = mid-1;
      }
      else{
         l = mid+1;
      }    
   }
   if(flag==-1) cout << -1 << endl;
   else cout << flag << endl;

   SpicyWings;
}
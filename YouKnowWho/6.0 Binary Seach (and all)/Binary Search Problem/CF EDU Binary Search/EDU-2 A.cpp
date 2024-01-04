// URL: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A

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

ll w, h, n;
bool monotonic(ll len){
   ll a = len/w; 
   ll b = len/h;
   if(b==0) return false;
   return a >= (double)n/b;
}

int main(){
   FAST;
    
   cin>>w>>h>>n;
   ll l=1, r=1e14, ans=0;
   while(l<=r){
      ll mid = l+(r-l)/2;
      if(monotonic(mid)){
         ans = mid;
         r = mid-1;
      }
      else{
         l = mid+1;
      }
   }
   cout << ans << endl;
   
   SpicyWings;
}
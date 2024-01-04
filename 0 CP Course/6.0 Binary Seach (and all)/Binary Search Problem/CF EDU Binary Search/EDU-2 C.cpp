// URL: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C

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
ll n, m1, m2;

bool monotonic(ll time){
   ll Min = min(m1, m2);
   ll copy=0;
   
   if(time >= Min){
      time -= Min;
      copy = 1;

      copy += (time/m1);
      copy += (time/m2);
   }
   
   return copy >= n;
}

int main(){
   FAST;
    
   cin>>n>>m1>>m2;
   ll l=1, r=1e10, ans=0;
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
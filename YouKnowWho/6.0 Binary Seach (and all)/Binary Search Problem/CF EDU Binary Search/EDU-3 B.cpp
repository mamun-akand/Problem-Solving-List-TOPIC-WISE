// URL: https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/B

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
const ll N = 1e5+9;
ll n, k;
vll v(N);

bool mono(ll Max){
   ll cnt=0, sum=0;
   for(ll i=1; i<=n; i++){
      if(v[i]>Max) return false; //very important line
      if(sum+v[i] > Max){
         sum = 0;
         cnt++;
      }
      sum+=v[i];
   }
   cnt++;
   return cnt <= k;
}

int main(){
   FAST;
   
   cin>>n>>k;
   for(ll i=1; i<=n; i++){
      cin>>v[i];
   }
   
   ll l=1, r=1e14, ans=0;
   while(l<=r){
      ll mid = l+(r-l)/2;
      // cout << mid << endl;
      if(mono(mid)){
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
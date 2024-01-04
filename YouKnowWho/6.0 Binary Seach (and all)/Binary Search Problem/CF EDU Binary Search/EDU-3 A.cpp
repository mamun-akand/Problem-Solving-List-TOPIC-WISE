// URL: https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/A

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
const ll N=1e5+9;
ll n;
vll pos(N), vel(N);

bool mono(double time){
   vector<double> left_range, right_range;
   for(ll i=1; i<=n; i++){
      double left  = pos[i] - (time*vel[i]);
      double right = pos[i] + (time*vel[i]);
      left_range.pb(left);
      right_range.pb(right);
   }
   double left_max = *max_element(all(left_range));
   double right_min = *min_element(all(right_range));
   
   return left_max <= right_min;
}

int main(){
   FAST;
   cin>>n;
   for(ll i=1; i<=n; i++){
      cin>>pos[i]>>vel[i];
   }
   
   double l=0, r=2e9, ans=0;
   ll iteration = 100;
   while(iteration--){
      double mid = l + (r-l)/2;
      if(mono(mid)){
         ans = mid;
         r = mid;
      }
      else{
         l = mid;
      }
   }
   cout<<fixed<<setprecision(7)<< ans << endl;
   
   SpicyWings;
}
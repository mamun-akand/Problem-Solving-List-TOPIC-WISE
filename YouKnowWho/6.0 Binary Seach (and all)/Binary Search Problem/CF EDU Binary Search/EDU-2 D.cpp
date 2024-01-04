// URL: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D

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
const ll N = 1000+9;
ll total_baloon, assistant;

vector<vector<ll>> v(N);
vector<ll> assist(N);

bool monotonic(ll total_time){
   ll total_possible=0, current_required = total_baloon;
   for(ll i=1; i<=assistant; i++){
      ll block_time = (v[i][1] * v[i][2]) + v[i][3];
      ll block_count= total_time/block_time;
      
      ll max_baloons = block_count * v[i][2];
      ll rem_block_time = total_time % block_time;
      max_baloons += min(v[i][2], rem_block_time/v[i][1]);
      total_possible += max_baloons;
      
      assist[i] = min(current_required, max_baloons);
      current_required -= assist[i]; 
   }
   return total_possible >= total_baloon;
}

int main(){
   FAST;
    
   cin>>total_baloon>>assistant;
   for(ll i=1; i<=assistant; i++){
      ll time, max, rest; cin>>time>>max>>rest;
      v[i] = {0,time, max, rest};
   }
   
   ll l=0, r=1e7,anss=0;
   while(l<=r){
      ll mid = l+(r-l)/2;
      if(monotonic(mid)){
         anss = mid;
         r = mid-1;
      }   
      else{
         l = mid+1;
      }
   }
   monotonic(anss);
   cout << anss << endl;
   for(ll i=1; i<=assistant; i++){
      cout << assist[i] << ' ';
   }
   
   SpicyWings;
}
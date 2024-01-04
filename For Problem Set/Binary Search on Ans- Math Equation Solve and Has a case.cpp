// URL: https://vjudge.net/contest/577004#problem/AH

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

ld Y;

bool mono(ld x){
    ld total = 8*pow(x, 4) + 7*pow(x, 3) + 2*pow(x, 2) + 3*x + 6;
    return total >= Y;
}

int main(){
   FAST;
   
   Test{
       cin>>Y;
       
       ld upperLimit = 8*pow(100,4)+7*pow(100,3)+2*pow(100,2)+3*100+6;
       
       if(Y < 6  or Y > upperLimit) {
          cout << "No solution!" << endl;
          continue;
       }
       
       ld L=0, R=100, ans = 0;
       
       while(R-L >= 1e-6){
          ld mid = L + (R-L)/2.0;
          if(mono(mid)){
             ans = mid;
             R = mid;
          }
          else{
             L = mid;
          }
       }
       
       cout << fixed << setprecision(4) << ans << endl;
   }
    
   SpicyWings;
}
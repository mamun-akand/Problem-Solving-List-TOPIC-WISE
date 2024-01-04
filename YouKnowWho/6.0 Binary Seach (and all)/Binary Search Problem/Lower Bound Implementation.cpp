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
   vector<int> v({1, 3, 4, 4, 4, 6, 6, 9});
   ll x=9;
   
   ll l=0, r=v.size();
   ll pos=-1, b_pos=-1;
   
   while(l<=r){
      ll mid = l + (r-l)/2;
      if(v[mid]==x){
         r = mid-1;
         pos = mid;
      }
      else if(v[mid]>x){
         r = mid-1;
         b_pos = mid;
      }
      else{
         l = mid+1;
      }
   } 
    
   if(pos==-1 and b_pos==-1) cout << "No Lower Bound" << endl; 
   else if(pos != -1) cout << pos << endl;
   else cout << b_pos << endl;
   
}
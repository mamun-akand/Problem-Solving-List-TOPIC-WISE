// URL: https://codeforces.com/problemset/problem/1547/C

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
#define   vld	vector <ld>
#define   mp	map <ll,ll>
#define   st	set <ll>

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   pi      3.1415926535897932384626433832795
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
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll k, n, m; cin>>k>>n>>m;
      
      vll v1(n), v2(m), final;
      for(auto &it:v1) cin >> it;
      for(auto &it:v2) cin >> it;
      
      ll LN=0, LM=0, flag=1;;
      while(LN<n || LM<m){
         ll mn;
         
         if(LN >= n){
            mn = v2[LM];
            LM++;
         }
         else if(LM >= m){  
            mn = v1[LN];
            LN++;
         }
         else if(v1[LN] < v2[LM]){
            mn = v1[LN];
            LN++;
         }
         else{
            mn = v2[LM];
            LM++;
         }
         
         if(mn <= k) final.pb(mn);
         else{
            flag=0;
            cout << -1 << endl;
            break;
         }
         
         if(mn==0) k++; 
      }
      
      if(flag==1) {
         vp(final); ln;
      }
   }
   
   SpicyWings;
}
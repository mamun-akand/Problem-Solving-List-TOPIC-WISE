// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================
ll start, endd, ans=0;

void possible_way(ll s, ll e){
   if(s > e) return;
   if(s == e){
      ans++;
      return;
   }
   possible_way(s+1, e);
   possible_way(s+2, e);
   possible_way(s+3, e);
}

int main(){
   FAST;
   
   cin>>start>>endd;
   possible_way(start, endd);
   cout << ans << endl;
    
   SpicyWings;
}
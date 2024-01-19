// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K

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

const ll N = 1009;
ll n, ara[N];

ll max_in_array(ll i, ll Max){
   if(i>n) return Max;
   if(ara[i]>Max){
      Max = ara[i];
   }
   return max_in_array(i+1, Max);
}

int main(){
   FAST;
   
   cin>>n;
   for(ll i=1; i<=n; i++){
      cin >> ara[i];
   }
   cout << max_in_array(2, ara[1]) << endl;
    
   SpicyWings;
}
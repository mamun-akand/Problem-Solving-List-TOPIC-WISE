// URL: https://codeforces.com/problemset/problem/1741/C

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

#define   vp(v)   for(auto it:v){cout << it <<" ";}
#define   sp(s)   while(!s.empty()){cout<<s.front() <<" ";s.pop();}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      vll v(n); for(auto &it:v) cin>>it;
      
      ll sum=0, ans = LLONG_MAX;
      for(ll i=0; i<n; i++) {
         sum += v[i];
         
         ll L=i+1, tempSum=0, tempCnt=i+1, flag=0;
         for(ll R=i+1; R<n; R++){
            tempSum += v[R];
            if(tempSum == sum){
               ll cnt = (R-L)+1;
               tempCnt = max(cnt, tempCnt);
               tempSum = 0;
               L = R+1;
               if(R == n-1) flag=1;
            }
            else if(tempSum > sum){
               break;  
            }
         }
         if(flag) ans = min(ans, tempCnt);
      }
      if(ans != LLONG_MAX) cout << ans << endl;
      else cout << v.size() << endl; 
  }
   
   SpicyWings;
}
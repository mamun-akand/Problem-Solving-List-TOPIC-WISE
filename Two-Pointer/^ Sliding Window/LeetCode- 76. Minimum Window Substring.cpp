//https://leetcode.com/problems/minimum-window-substring/description/

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

string minWindow(string s, string t) {
   unordered_map<char, ll> mp;
   unordered_map<char, ll> window;
   for(auto it:t) mp[it]++;
   
   ll L=0, counter=0, ans = LLONG_MAX;
   string ansStr="";
   
   for(ll R=0; R<s.size(); R++){
      char c = s[R];
      if(mp.find(c) != mp.end()){
         window[c]++;
         if(window[c] <= mp[c]){
            counter++;
         }
      }
      
      if(counter == t.size()){
         while(mp.find(s[L]) == mp.end() || window[s[L]] > mp[s[L]]){
            if(mp.find(s[L]) == mp.end()){
               L++;
            }
            else{
               window[s[L]]--;
               L++;
            }
         }
         if(R-L+1 < ans){
            ans = R-L+1;
            ansStr = s.substr(L, R-L+1);
         }
         
         window[s[L]]--;
         counter--;
         L++;
      }
   }
   
   return ansStr;
}

int main(){
   FAST;
   
   string s = "a", t = "aa";
   cout << minWindow(s, t) << endl;
   
   SpicyWings;
}
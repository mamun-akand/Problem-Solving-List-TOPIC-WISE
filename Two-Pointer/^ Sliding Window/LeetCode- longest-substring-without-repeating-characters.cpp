//https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/928957970/

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

   int longestKSubstr(string s) {
        map<char, int> mp;
        int L=0, ans=INT_MIN;
        for(int R=0; R<s.size(); R++){
            mp[s[R]]++;
            if(mp.size() == R-L+1){
                ans = max(ans, R-L+1);
            }
            else if(mp.size() < R-L+1){
                mp[s[L]]--;
                if(mp[s[L]]==0) mp.erase(s[L]);
                L++;
            }
        }
        if(ans==INT_MIN) return 0;
        return ans;
   }
   
   int main(){
      FAST;
      
      string s="dvdf";
      
      int x = longestKSubstr(s);
      cout << x << endl;
      
      SpicyWings;
   }
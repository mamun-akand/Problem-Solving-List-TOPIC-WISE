// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

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
string s; 

bool is_vowel(char ch){
   ch = tolower(ch);
   if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'){
      return true;
   }
   return false;
}

int count_vowel(ll i){
   if(i == (ll)s.size()){
      return 0;
   }
   ll cnt = (ll)is_vowel(s[i]);
   return cnt + count_vowel(i+1);
}

int main(){
   FAST;

   getline(cin,s);
   cout << count_vowel(0) << endl;
   
   SpicyWings;
}
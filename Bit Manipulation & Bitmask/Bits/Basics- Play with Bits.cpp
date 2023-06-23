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

#define   Test    ll tc; cin>>tc; f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

//Mahedi Bhai
/*void to_binary_bit(ll decimal){
      string binary = "";
      
      while(decimal > 0){
         binary += (decimal%2) + '0';
         decimal = decimal/2;
      }  
      
      reverse( binary.begin(), binary.end() );
      cout << binary << endl;
}*/

//Luv to_binary
void to_binary(int deci){
   for(int i=10; i>=0; i--){
      cout << ((deci >> i) & 1);
   }
   cout << endl;
}

int main(){
   
      ll deci=13;
      // cin>>deci;
   
      to_binary(deci);
      
      //i'th position bit '0' changed to '1' by doing OR (|)
      to_binary( deci | (1<<1) );
      ln;
      
      //invert bits (1 to 0) && (0 to 1) by using ~ (Tilde)
      //Then i'th position bit '1' changed to '0' by doing OR (|)
      to_binary(deci);
      to_binary(~(1<<2));
      ln;
      cout << "Unset 2nd (1):" << endl;
      to_binary(deci & (~(1<<2)) );
      
      //Toggle: To make 1 to 0; 0 to 1
      to_binary(deci ^ (1<<2));
      to_binary(deci ^ (1<<3));
      
      //set bit count built-in function
      cout << __builtin_popcount(deci) << endl;
      cout << __builtin_popcountll((1LL<<35)-1)  << endl;
      
   SpicyWings;
}
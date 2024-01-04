#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
 
int main(){
   clock_t st = clock();
   
   //start
   ll n = 1e9;
   ll sum = 0;
   for(ll i=0; i<n; i++){
      sum += i;
   }
   cout << sum << endl;
   //end
   
   clock_t en = clock();
   
   cout << 1.0*(en-st) / CLOCKS_PER_SEC << endl;
}
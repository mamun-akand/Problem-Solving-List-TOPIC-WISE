#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
   int x = 20;//x= 00000000 00000000 00000000 00010100
   ll y = 30; //y= 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00011110

   //count number of set bits
   cout << __builtin_popcount(x) << endl;
   cout << __builtin_popcountll(y) << endl;
   
   //count leading zeros
   cout << __builtin_clz(x) << endl;
   cout << __builtin_clzll(y) << endl;

   //count traling zeros
   cout << __builtin_ctz(x) << endl;
   cout << __builtin_ctzll(y) << endl;
   
   //index of highest set bit
   cout << 31 - __builtin_clz(x) << endl;
   cout << 63 - __builtin_clzll(y) << endl;
   
   //index of lowest set bit
   cout << __builtin_ffs(x)-1 << endl;
   cout << __builtin_ffsll(y)-1 << endl;
   cout << __builtin_ctz(x) << endl;

}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   
   int n = 100, b = 2e7, mod = 1e9+7;
   
   int fact = 1;
   
   for(int i=1; i<=n; i++){
      fact = 1LL*fact*i % mod;
   }
   
   cout << fact << endl;
}
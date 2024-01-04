#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   ll n=20;
   double sum=0;
   
   for(ll i=n; i>=1; i--){
      sum += log10(i);
   }
   
   //number of digits of factorial
   cout << (floor)(sum) + 1 << endl;
}
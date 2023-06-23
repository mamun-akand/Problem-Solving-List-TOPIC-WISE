#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sumOfNum(ll n, ll sum){
   if(n<1){
      cout << sum << endl;
      return;  
   }
   
   sumOfNum(n-1, sum+n);
}

int main(){
   ll n=3;
   sumOfNum(n, 0);
}
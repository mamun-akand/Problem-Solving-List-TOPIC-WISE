#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll N = (ll)1e6+100;
const ll n = (ll)1e5+100;

ll divisor1[N];
ll divisor2[n];

ll divisorCountPreCal(){
   //n*log(n) works till n = 10^6
   for(ll i=1; i<=N; i++){
      for(ll j=i; j<=N; j+=i){
         divisor1[j] += 1;
      }
   } 
}

ll divisorCountPreCal_1(){
   //n*root(n) works till n = 10^5
   for(ll j=1; j<=n; j++){
      ll cnt=0;
      for(ll i=1; i*i<=j; i++){
         if(n%i==0){
            cnt++;
            if(n/i != i) cnt++;
         }
      }
      divisor2[j] = cnt;
   }
}

int main(){
   divisorCountPreCal();
   cout << divisor1[10] << endl;
   
   divisorCountPreCal_1();
   cout << divisor2[10] << endl; 
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e6;

int divisors[N];

int main(){
   for(ll i=1; i<N; i++){
      for(ll j=i; j<N; j+=i){
         divisors[j]++;      }
   }
   
   //prime from divisors
   vector<ll> primes;
   for(ll i=0; i<=100; i++){
      if(divisors[i]==2) primes.push_back(i);
   }
   
   //print
   for(ll i=0; i<primes.size(); i++){
      cout << primes[i] << ' ';
   }
}

//tc: O(n log n)
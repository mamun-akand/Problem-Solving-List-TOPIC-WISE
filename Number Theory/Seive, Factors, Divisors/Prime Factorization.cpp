#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    ///is_prime : O(sqrt(N))

//    bool is_prime = true;
//
//    if(n==1) {cout << 0 << endl; return 0;}
//
//    for(int i=2; i*i<=n; i++){
//        if(n%i==0){
//            is_prime = false;
//        }
//    }
//    cout << is_prime << endl;


    ///Prime_Factorization : O(sqrt(N))

   vector <int> prime_fact;

   for(int i=2; i*i<=n; i++){
       while(n%i==0){
           prime_fact.push_back(i);
           n = n/i;
       }
   }
   if(n>1) prime_fact.push_back(n); //For the case of 24 -> 2, 2, 2, 3 without this line last 3 would be missing.

   for(auto val : prime_fact){
       cout << val << " ";
   }

}

#include<bits/stdc++.h>
using namespace std;

const int n = 1e7+10;
vector <bool> isPrime(n, 1);

int main(){
    isPrime[0] = isPrime[1] = false;

    ///O(n*(log (log n)))

//    for(int i=2; i<n; i++){
//        if(isPrime[i]==true){
//            for(int j=2*i; j<=n; j+=i){
//                isPrime[j] = false;
//            }
//        }
//    }
//
//    for(int i=0; i<100 ; i++){
//        cout << isPrime[i] << " ";
//    }

    ///More Efficient : O(n*(log (log n)))

   for(int i=2; i*i<=n; i++){           /// i*i
       if(isPrime[i]==true){
           for(int j=i*i; j<=n; j+=i){  /// i*i
               isPrime[j] = false;
           }
       }
   }

   for(int i=0; i<100 ; i++){
       cout << isPrime[i] << " ";
   }

    return 0;
}

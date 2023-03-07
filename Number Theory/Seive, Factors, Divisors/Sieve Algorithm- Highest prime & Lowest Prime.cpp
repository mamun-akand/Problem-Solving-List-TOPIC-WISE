#include<bits/stdc++.h>
using namespace std;

const int n = 1e5+10;
vector <bool> isPrime(n, 1);
vector <int> hp(n, 0), lp(n, 0);
vector <int> vec[n];

int main(){
//    isPrime[0] = isPrime[1] = 0;
//    for(int i=2; i*i<=n; i++){
//        if(isPrime[i]==true){
//            lp[i] = hp[i] = i;
//            for(int j=2*i; j<n; j+=i){
//                isPrime[j] = false;
//                hp[j] = i;
//                if(lp[j]==0){
//                    lp[j] = i;
//                }
//            }
//        }
//    }

    //Prime Print
//    for(int i=0; i<100; i++){
//        cout << isPrime[i] << " ";
//    }

    //Lowest and Highest Prime print

//    for(int i=1; i<100; i++){
//        cout << lp[i] << " " << hp[i] << endl;
//    }

    ///Prime Factorization
////    int num; cin >> num;
////    vector<int> v;
////
////    while(num>1){
////       int prime_fact = lp[num];
////       while(num%prime_fact==0){
////            v.push_back(prime_fact);
////            num /= prime_fact;
////       }
////    }
////
////    //Prime Factorization Print
////    for(auto it : v){
////        cout << it << " ";
////    }

    ///Divisors by sieve

//////    for(int i=2; i<n; i++){
//////        for(int j=i; j<n; j+=i){
//////            vec[j].push_back(i);
//////        }
//////    }
//////
//////    for(int i=2; i<10; i++){
//////        for(auto it : vec[i]){
//////            cout << it << " ";
//////        }
//////        cout << endl;
//////    }

    return 0;

}

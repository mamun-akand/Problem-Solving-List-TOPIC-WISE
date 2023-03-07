#include<bits/stdc++.h>
using namespace std;

const int n = 1e7;
vector <bool> isPrime(n, 1);

int main(){

    isPrime[0] = isPrime[1] = 0;
    for(int j=2*2; j*j<n; j+=2){
        isPrime[j] = false;
    }

    for(int i=2; i<=n; i++){
        if(isPrime[i]==true){
            for(int j=2*i; j<n; j+=i){
                isPrime[j] = false;
            }
        }
    } /// O(n*log(log (n)) == 1s

    //print
//    for(int i=0; i<100; i++){
//       cout << isPrime[i] << " ";
//    }

    int t; cin>>t;          //t <= 10^8  = 1s

    while(t--){
        int num; cin>>num;
        cout << isPrime[num] << endl;
    }
}

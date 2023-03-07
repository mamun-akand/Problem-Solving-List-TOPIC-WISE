#include<bits/stdc++.h>
using namespace std;

int n = 2000;
vector <bool> isPrime(n, true);
vector <int> primes;

void sieve(){

    isPrime[0] = isPrime[1] = false;
    isPrime[2] = true;

    for(int i=4; i<=n; i+=2){
        isPrime[i] = false;
    }

    for(int i=3; i*i<=n; i+=2){
        if(isPrime[i]){
            for(int j=i*i; j<=n; j+=i){
                isPrime[j] = false;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(isPrime[i]) primes.push_back(i);
    }

}

int main(){

    sieve();
    int n, k; cin>>n>>k;

    int cnt=0;

    for(int i=1; primes[i]<=n; i++){
        int sum=0;
        sum = primes[i]+primes[i-1]+1;
        if(isPrime[sum]) cnt++;
    }

    cout << cnt << endl;

}

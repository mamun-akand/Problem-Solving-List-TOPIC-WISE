#include<bits/stdc++.h>
#define ll long long
using namespace std;

// l, r <= 10^12 and (r-l) <= 10^6,
// Condition for SegmentedSieve

int n = 1e6+10;                //n = sqrt(right valu), 10^12 hole sqrt(10^12) = 10^6
vector<bool> isPrime(n, true);
vector<int> primes;

void sieve(){
    isPrime[0] = isPrime[1] = false;
    isPrime[2] = true;
    for(int i=4; i<=n; i+=2)
        isPrime[i] = false;

    for(int i=3; i*i<=n; i++){
        if(isPrime[i]==true){
            for(int j=i*i; j<=n; j+=i){
                isPrime[j] = false;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(isPrime[i]) primes.push_back(i);
    }
}

void segSieve(ll l, ll r){

    vector<bool> isPrime2(r-l+1, true);

    for(int i=0; primes[i] <= sqrt(r); i++){

        int CP = primes[i];             //CP=Current Prime
        ll base = (l/CP)*CP;
        if(base<l) base+=CP;

        for(int j=base; j<=r; j+=CP){
            isPrime2[j-l] = false;      //Attention: [j-l] hobe, [base-l] eta na. Eta loop er sathe change hote thakbe.
        }

        if(base==CP) isPrime2[base-l] = true;  /// Prime number gulo jodi left value er moddhe pore then.
        if(l==1) isPrime2[0] = false;          /// left value 1 hole seta ke false korte hobe.
    }

    for(int i=0; i < r-l+1; i++){
        if(isPrime2[i]==true) cout << l+i << " ";
    }

}

int main(){

    sieve();

    ll left, right;
    cin >> left >> right;

    segSieve(left, right);

    return 0;

}

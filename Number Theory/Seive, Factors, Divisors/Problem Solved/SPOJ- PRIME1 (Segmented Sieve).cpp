#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
using namespace std;

int n = 32000;
vector<bool> isPrime(n, true);
vector<int> primes;

void sieve(){
    isPrime[0] = isPrime[1] = false;
    isPrime[2] = true;
    for(int i=4; i<=n; i+=2) isPrime[i] = false;

    for(int i=3; i*i<=n; i+=2){
        if(isPrime[i] == true){
            for(int j=i*i; j<=n; j+=i){
                isPrime[j] = false;
            }
        }
    }

    for(int i=0; i<=n; i++){
        if(isPrime[i]) primes.push_back(i);
    }
}

void segSieve(ll l, ll r){

    vector<bool> isPrime2(r-l+1, true);

    for(int i=0; primes[i]*primes[i] <= r; i++){
        int cp = primes[i];
        ll base = (l/cp)*cp;
        if(base<l) base += cp;

        for(int j=base; j<=r; j+=cp){
            isPrime2[j-l] = false;
        }

        if(base==cp) isPrime2[base-l] = true;
        if(l==1) isPrime2[0] = false;
    }

    for(int i=0; i<r-l+1; i++){
        if(isPrime2[i]) cout << l+i << endl;
    }
}

int main(){

    fast;
    sieve();

    int t; cin >> t;

    while(t--){
        ll left, right;
        cin >> left >> right;

        segSieve(left, right);
    }

    return 0;
}

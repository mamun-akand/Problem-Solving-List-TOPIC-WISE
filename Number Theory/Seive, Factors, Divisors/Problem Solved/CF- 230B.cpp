#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n = 1000009;
vector <int> isPrime(n, 1);

void sieve(){
    isPrime[0]=isPrime[1]=0;

    for(ll i=4; i<=n; i+=2){
        isPrime[i]=0;
    }

    for(ll i=3; i*i<=n; i+=2){
        if(isPrime[i] == 1){
            for(ll j=i*i; j<n; j+=i){
                isPrime[j]=0;
            }
        }
    }
}

int main(){

    sieve();
    int t; cin >> t;

    while(t--){
        ll num; cin >> num;

        ll root = sqrt(num);

        if(root*root == num && isPrime[root]==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

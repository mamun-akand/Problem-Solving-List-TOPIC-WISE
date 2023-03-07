#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll fact(ll num){
    if(num==0) return 1;
    return num * fact(num-1);
}

ll nCr(ll n, ll r){
    return fact(n) / (fact(r) * fact(n-r));
}

int main(){

    ll n=7, r=5;
    cout << nCr(n,r);

}

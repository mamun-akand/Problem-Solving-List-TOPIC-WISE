#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll bigmod(ll a, ll n){
    ll mod = 1e9+7;
    if(n==0) return 1;
    if(n%2==1) return a * bigmod(a, n-1) % mod;
    else{
        ll v = bigmod(a, a/2);
        return (v * v) % mod;
    }
}

ll get_rem(string s, ll m){
    ll rem = 0;
    for(int i=0; s[i] != '\0'; i++){
        rem = (rem*10 + s[i]-'0') % m;
    }
    return rem;
}

int main(){
    ll n;
    string power;
    cin>>n>>power;

    ll mod = 1e9+7;
    ll p = get_rem(power, mod);

    cout << bigmod(n, p) << endl;
}

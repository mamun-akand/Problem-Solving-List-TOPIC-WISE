#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll d_sum(ll n){
    if(n==0) return 0;
    return n%10 + d_sum(n/10);
}

int main(){
    string s; cin>>s;
    ll k; cin>>k;
    ll sum=0;

    for(ll i=0; i<s.size(); i++){
        sum += (int)s[i] - 48;
    }
    sum *= k;

    while(sum > 9){
        sum = d_sum(sum);
    }
    cout << sum << endl;

    return 0;
}

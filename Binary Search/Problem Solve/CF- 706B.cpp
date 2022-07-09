#include<bits/stdc++.h>
#define ll __int64
using namespace std;

int main(){
    ll n; cin>>n;
    ll a[n];

    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);

    ll d; cin>>d;

    while(d--){
        ll qry; cin>>qry;
        ll *ptr = upper_bound(a, a+n, qry);

        if(qry<a[0])
            cout << "0" << endl;
        else{
            ll index = ptr-a;
            cout << index << endl;
        }
    }

    return 0;
}

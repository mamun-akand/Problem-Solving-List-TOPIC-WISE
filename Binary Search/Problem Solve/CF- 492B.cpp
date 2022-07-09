#include<bits/stdc++.h>
#define ll __int64
#define ld long double
using namespace std;

int main(){
    ll n, l; cin>>n>>l;
    set <ll> mp;

    for(ll i=0; i<n; i++){
        ll x; cin>>x; mp.insert(x);
    }

    ll sz = mp.size();
    ll Max = LLONG_MIN;

    for(auto it=mp.rbegin(); it!=mp.rend(); it++){
        ll dif = *it-*next(it, 1);
        if(dif > Max) Max = dif;
        if(next(it, 2) == mp.rend()) break;
    }

    ld rad = (ld)(Max/2.00);

    if(sz==1){
        ld a = abs(*mp.begin()-0);
        ld b = abs(*mp.begin()-l);
        ld c = a > b  ? a : b;
        if(c>rad) rad = c;
    }

    if(*mp.begin() != 0 && ((ld)(*mp.begin()))>rad){
        rad = *mp.begin();
    }

    if(*prev(mp.end(), 1) != l){
        ld d = (ld)l - ((ld)(*prev(mp.end(), 1)));
        if(d>rad) rad = d;
    }

    cout << fixed << setprecision(10);
    cout << rad << endl;

    return 0;
}

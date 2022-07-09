#include<bits/stdc++.h>
#define ll __int64
using namespace std;

int main(){
    ll n; cin >> n;
    string s; cin >> s;

    vector < pair<char, long long> > v;

    for(ll i=0; i<n; i++) v.push_back({s[i], i+1});
    sort(v.begin(), v.end());

//    for(auto it:v){
//       cout << it.first << " " << it.second << endl;
//    }

    ll t; cin >> t;

    while(t--){
        string ss; cin >> ss;
        map <char, ll> mp;

        for(ll i=0; i<ss.size(); i++){
            mp[ss[i]]++;
        }

//        for(auto it : mp){
//            cout << it.first << " " << it.second << endl;
//        }

//        for(auto it : mp){
            auto pos = lower_bound(v.begin(), v.end(), make_pair('a', 0));
//        }



    }

}

#include<bits/stdc++.h>
using namespace std;

bool cmp( pair<char, int>a, pair<char, int>b ){
    if(a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}

int main(){
    string s; cin >> s;

    map <char, int> mp;

    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }

    vector< pair<char, int> > v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), cmp);

    cout << v[0].first << endl;

    return 0;
}

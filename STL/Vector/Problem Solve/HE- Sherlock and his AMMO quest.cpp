#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}

int main(){
    int n; cin >> n;
    vector< pair<string, int> > v;

    for(int i=0; i<n; i++){
        string s; int x; cin >> s >> x;
        v.push_back({s, x});
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}

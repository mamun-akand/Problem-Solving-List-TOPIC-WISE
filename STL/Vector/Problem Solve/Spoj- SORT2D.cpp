#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, long long>a, pair<long long, long long>b){
    if(a.first != b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        vector< pair<long long, long long> > v;

        for(int i=0; i<n; i++){
            long long x, y;
            scanf("%lld %lld", &x, &y);
            v.push_back({x, y});
        }

        sort(v.begin(), v.end(), cmp);

        for(int i=0; i<v.size(); i++){
            printf("%lld %lld\n", v[i].first, v[i].second);
        }
    }

    return 0;
}

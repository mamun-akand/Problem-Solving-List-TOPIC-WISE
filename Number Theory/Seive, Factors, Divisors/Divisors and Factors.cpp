#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n; cin>>n;

//    int cnt=0, sum=0;
//
//    //O(sqrt(n))
//    for(int i=1; i*i<=n; i++){ // i<=sqrt(n) same as i*i<=n. squaring both side.
//        if(n%i==0){
//            cout << i << " " << n/i << endl;
//            cnt+=1;
//            sum+=i;
//            if(n/i != i){
//                cnt+=1;
//                sum+=n/i;
//            }
//        }
//    }
//    cout << cnt << " " << sum << endl;

    
    
    /// Count & Sum with prime factorization : More Efficient

    map <ll, ll> mp;

    for(ll i=2; i*i<=n; i++){
        while(n%i==0){
            mp[i]++;
            n = n/i;
        }
    }
    if(n>1) mp[n]++;

    ll sum=1, cnt=1;

    for(auto it : mp){
        sum *= (pow(it.first, (it.second+1))-1)/(it.first-1);
        cnt *= (it.second+1);
    }

    cout << sum << " " << cnt << endl;
}

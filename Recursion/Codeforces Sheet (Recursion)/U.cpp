// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 22;
ll w[N], v[N];
ll n, total, Max=LLONG_MIN;

void subSeq(ll i, ll weight_sum, ll val_sum){
   if(i>n){
      if(weight_sum <= total and Max < val_sum){
         Max = val_sum;
      }
      return; 
   }
   subSeq(i+1, weight_sum+w[i], val_sum+v[i]); //take
   subSeq(i+1, weight_sum, val_sum); //not take
}

int main(){
   cin>>n>>total;
   for(ll i=1; i<=n; i++){
      cin>>w[i]>>v[i];
   }
   subSeq(1, 0, 0);
   cout << Max << endl;
}
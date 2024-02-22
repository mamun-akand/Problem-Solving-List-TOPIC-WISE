// https://atcoder.jp/contests/dp/tasks/dp_a
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5+9;
ll ara[N], n, save[N];

ll jump(ll i){
   if(i==1) return 0; //base
   
   if(save[i] != -1){ //memo
      return save[i];
   }
   if(i==2){
      ll cost1 = jump(i-1) + abs(ara[i]-ara[i-1]);
      return save[i] = cost1;
   }
   else{
      ll cost1 = jump(i-1) + abs(ara[i]-ara[i-1]);
      ll cost2 = jump(i-2) + abs(ara[i]-ara[i-2]);
      return save[i] = min(cost1, cost2);
   }
}
int main(){
   memset(save, -1, sizeof(save));
   cin>>n;
   for(ll i=1; i<=n; i++){
      cin>>ara[i];
   }
   cout << jump(n) << endl;
}
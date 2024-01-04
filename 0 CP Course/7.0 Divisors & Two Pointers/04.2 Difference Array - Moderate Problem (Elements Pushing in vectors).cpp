// Statement: We have n lists numbered from 1 to n. Initially, all lists are empty. We have q queries of the form l,r,x. For each query, we have to append x to all lists from l to r inclusive. After all queries, print the number of unique elements in each list.
// Constraints: 1≤ n,q  ≤ 10^6, 1 ≤ l ≤ r ≤n, 1 ≤ x ≤ 10^9
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+100;
vector<int> add[N], rem[N];

int main(){
   int n, q; cin>>n>>q;
   while(q--){
      int l, r, x; cin>>l>>r>>x;
      add[l].push_back(x);
      rem[r+1].push_back(x);
   }
   
   map<int, int> mp;
   for(int i=1; i<=n; i++){
      for(auto x : add[i]){
         mp[x]++;
      }
      for(auto x : rem[i]){
         mp[x]--;
         if(mp[x]==0){
            mp.erase(x);
         }
      }
      cout << mp.size() << endl;
   }
}


/*
Input:
5 3
2 4 3
3 5 4
1 3 -1

Output:
1
2
3
2
1
*/

//Basic Problem: Given an array aa of length n and q queries of the form l,r,x for each query, add x to all elements of aa from l to r inclusive. Print the final array after all queries.
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+9;
int a[N], d[N];

int main(){
   int n, q; cin>>n>>q;
   for(int i=1; i<=n; i++) cin>>a[i];
   
   //dif array
   for(int i=1; i<=n; i++){
      d[i] = a[i] - a[i-1];
   }
   
   while(q--){
      int l, r, x; cin>>l>>r>>x;
      d[l]   += x;
      d[r+1] -= x;
   }
   
   //ans array
   for(int i=1; i<=n; i++){
      a[i] = a[i-1] + d[i];
   }
   
   for(int i=1; i<=n; i++){
      cout << a[i] << ' ';
   }
}



/*input:
5 3
1 3 5 2 4 
2 4 2
1 5 3
4 5 -2

Output:
4 8 10 5 5 
*/
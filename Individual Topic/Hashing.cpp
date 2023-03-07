#include<bits/stdc++.h>
using namespace std;

/*
   1 <= N <= 1e5
   1 <= a[i] <= 1e7
   1 <= q <= 1e5
   
*/

const int N = 1e5;
int hsh[N];

int main(){
   int n; cin>>n;
   int ara[n];
   
   for(int i=0; i<n; i++){
      cin >> ara[i];
      hsh[ara[i]]++;
   }
   
   int q; cin>>q;

   while(q--){ 
      int x; cin>>x;
      cout << hsh[x] << endl;
   }
   
   //O(n) + O(q) = O(n)
   
}


















#include<bits/stdc++.h>
using namespace std;

int main(){
   int n; cin>>n;
   // formula: (n!/2) * (n*(n-1)/2)
   // (n!/2) = one pair contribution of inversion pair in all permutation.
   // there are (n*(n-1)/2) pairs. like 3>2, 2>1, 3>1
   int fact = 1;
   for(int i=1; i<=n; i++){
		fact = fact * i;
   }
   cout << (fact/2) * (n*(n-1)/2) << endl;
}






















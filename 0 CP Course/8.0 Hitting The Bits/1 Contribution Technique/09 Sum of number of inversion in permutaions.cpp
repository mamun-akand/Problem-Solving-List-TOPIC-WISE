#include<bits/stdc++.h>
using namespace std;

int main(){
   int n; cin>>n;
   // formula: (n!/2) * (n*(n-1)/2)
   // (n!/2) = half of the permutation meets inverse condition
   // (n*(n-1)/2) = total of selection two element of n elements
   int fact = 1;
   for(int i=1; i<=n; i++){
		fact = fact * i;
   }
   cout << (fact/2) * (n*(n-1)/2) << endl;
}






















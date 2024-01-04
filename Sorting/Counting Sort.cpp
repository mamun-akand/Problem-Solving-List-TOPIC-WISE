#include<bits/stdc++.h>
using namespace std;

const int Max = 1e6;
int frequency[Max];

// Cons: negative value not allowed
int main(){
   int n=6; 
   //cin>>n;
   int ara[n] = {5,3,1,2,4,4};
   //for(int i=0; i<n; i++) cin>>ara[i];
   
   for(int i=0; i<n; i++){
      frequency[ara[i]]++;
   }
   for(int i=0; i<n; i++){
      for(int j=0; j<frequency[i]; j++){
         cout << i << " ";
      }
   }
   return 0;
}

// TC: O(n+max element)

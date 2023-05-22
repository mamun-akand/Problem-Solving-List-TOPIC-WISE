#include<bits/stdc++.h>
using namespace std;

int main(){
   int n = 5;
   int ara[5] = {23, 24, 23, 13, 17};
   
   for(int i=0; i<n; i++){
      int minIndex = i;
      for(int j=i+1; j<n; j++){
         if(ara[j] < ara[minIndex]) minIndex = j;
      }
      swap(ara[i], ara[minIndex]);
   }
   
   for(int i=0; i<n; i++){
      cout << ara[i] << " ";
   }
   
}


















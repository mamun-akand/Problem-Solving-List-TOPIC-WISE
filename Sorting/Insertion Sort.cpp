#include<bits/stdc++.h>
using namespace std;

void insertion(int ara[], int n){

   for(int i=1; i<n; i++){
      int value = ara[i];
      int j = i-1;
      while(j>=0 && ara[j] > value){
         ara[j+1] = ara[j];
         j--;
      }
      ara[j+1] = value;
   }
}

int main(){
   
   int n = 6;
   int ara[6] = {11,24, 23, 13, 10, 23};
   
   insertion(ara, n);
   
   for(int i=0; i<n; i++){
      cout << ara[i] << " ";
   }
   
}


















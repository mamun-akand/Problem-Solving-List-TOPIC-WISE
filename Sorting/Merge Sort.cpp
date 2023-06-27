#include<bits/stdc++.h>
using namespace std;

int ara[9] = {8, 4, 5, 3, 1, 7, 2, 6, 5};

void merge(int low, int mid, int high){
   int lsize = (mid-low)+1;
   int rsize = (high-(mid+1))+1;
   
   int left[100], right[100];
   for(int i=0; i<lsize; i++){
      left[i] = ara[low+i];
   }
   for(int j=0; j<rsize; j++){
      right[j] = ara[mid+1+j];
   } 
   
   int i=0, j=0, k=low;
   while(i<lsize && j<rsize){
      if(left[i]<right[j]){
         ara[k] = left[i];
         i++;
      }
      else{
         ara[k] = right[j];
         j++;
      }
      k++;
   }
   
   for(i=i; i<lsize; i++){
      ara[k]=left[i];
      k++;
   }
   for(j=j; j<rsize; j++){
      ara[k]=right[j];
      k++;
   }
}

void divide(int low, int high){
   if(low >= high) return;
   
   int mid = low + (high-low)/2;
   divide(low, mid);
   divide(mid+1, high);
   
   merge(low, mid, high);
}

int main(){
   divide(0, 8);
   
   for(int i=0; i<8; i++){
      cout << ara[i] << " ";
   }
}
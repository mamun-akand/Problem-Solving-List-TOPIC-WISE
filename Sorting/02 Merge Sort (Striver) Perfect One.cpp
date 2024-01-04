#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> ara;

void merge(ll low, ll mid, ll high){
   ll i=low, j=mid+1;
   vector<ll> temp;
   while(i<=mid and j<=high){
      if(ara[i] <= ara[j]){
         temp.push_back(ara[i]);
         i++;
      }
      else{
         temp.push_back(ara[j]);
         j++;
      }
   }
   while(i<=mid){
      temp.push_back(ara[i]);
      i++;
   }
   while(j<=high){
      temp.push_back(ara[j]);
      j++;
   }
   for(ll i=low, j=0; i<=high; i++, j++){
      ara[i] = temp[j];
   }
}
void merge_sort(ll low, ll high){
   if(low >= high) return;
   ll mid = low + (high-low)/2;
   
   merge_sort(low, mid);
   merge_sort(mid+1, high);
   merge(low, mid, high);
}
int main(){
   ara = {1,3,5,7,9,2,4,6,8,0};
   merge_sort(0, 9);
   for(ll i=0; i<=9; i++){
      cout << ara[i] << ' ';
   }
}

//tc: O(n log n)
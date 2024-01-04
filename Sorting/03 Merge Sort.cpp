#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> ara = {8, 4, 5, 3, 1, 7, 2, 6, 5};

void merge(ll low, ll mid, ll high){
   vector<ll> temp;
   
   ll left = low;      //start index
   ll right = mid+1;   //start index
   
   while(left <= mid && right <= high){
      if(ara[left] < ara[right]){
         temp.push_back(ara[left]);
         left++;
      }
      else{
         temp.push_back(ara[right]);
         right++;
      }
   }
   
   while(left<=mid){
      temp.push_back(ara[left]);
      left++;
   }
   while(right<=high){
      temp.push_back(ara[high]);
      right++;
   }
   
   //tranfering all element temp to arr
   for(ll i=low; i<=high; i++){
      ara[i] = temp[i-low];
   }
}

void merge_sort(ll low, ll high){
   if(low == high) return;
   
   ll mid = low + (high-low)/2;
   merge_sort(low, mid);
   merge_sort(mid+1, high);
   
   merge(low, mid, high);
}

int main(){
   ara = {8, 4, 5, 3, 1, 7, 2, 6, 5};

   merge_sort(0, 8);
   
   for(ll i=0; i<8; i++){
      cout << ara[i] << " ";
   }
}
#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
   int ans;
   if(nums.size()==1) {ans = 0; return ans;}
   if(nums[0] > nums[1]) {ans = 0; return ans;}
   if(nums[nums.size()-1] > nums[nums.size()-2]) {ans = nums.size()-1; return ans;}
   
   int low=1, high = nums.size()-2;
   
   while(low<=high){
      int mid = low + (high-low)/2;    //as like (low+high)/2;
      
      if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]){
         ans = mid; break;
      }
      else if(nums[mid+1] > nums[mid]){
         low = mid+1;
      }
      else if(nums[mid-1] > nums[mid]){
         high = mid-1;
      }
   }
   return ans;
}

int main(){
   // vector<int> v = {4,3,2,1};
   vector<int> v = {1};
   int x = findPeakElement(v);
   cout << x << endl;
}
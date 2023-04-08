// https://leetcode.com/problems/two-sum/submissions/929591134/

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
   unordered_map<int, int> mp;
   vector<int> v;
   
   for(int i=0; i<nums.size(); i++){
      int dif = target-nums[i];
      if(mp.find(dif) != mp.end()){
         v.push_back(i);
         v.push_back(mp.find(dif)->second);
         return v;
      }
      else{
         mp[nums[i]] = i;
      }
   }
   return v;
}

int main(){
   vector<int> vv = {3,3};
   
   vector<int> v;
   v = twoSum(vv, 6);
   
   for(auto it:v){
      cout << it << endl;
   }
}
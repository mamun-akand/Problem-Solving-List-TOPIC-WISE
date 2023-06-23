//"Triplet equal to x" using Two-Pointers
//Approach: Outer Loop till n-1 and inner loop using two-pointer for two sum.
//Then In total Three SUM of Outer and Inner Loop; 
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {2,-10,6,8,4};
   int x = 14;
   sort(v.begin(), v.end());
   
   for(int i=0; i<v.size(); i++){
      int l = i+1;
      int r = v.size()-1;
      //Two-Pointers
      while(l<r){
         if(v[i] + v[l] + v[r] == x){
            cout << v[i] << " " << v[l] << " " << v[r] << endl;
         }
         if((v[i] + v[l] + v[r]) < x) l++;
         else r--;
      }
   }
   //Time Complexity: O(n^2) 
   //Space Complexity: O(1) because only l, r extra variable is used.  
   return 0;
}
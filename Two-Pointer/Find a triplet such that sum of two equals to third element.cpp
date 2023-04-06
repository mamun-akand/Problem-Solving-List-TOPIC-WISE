//Find a triplet such that sum of two equals to third element
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {9,2,6,1,8,3,4,7,5};
   
   sort(v.begin(), v.end());
   
   for(int i=0; i<v.size(); i++){
      int l = i+1;
      int r = v.size()-1;
      //Two-Pointers
      while(l<r){
         if((abs(v[l]-v[r]) == v[i]) ){
            cout << v[i] << " " << v[l] << " " << v[r] << endl;
         }+
         if(abs(v[l]-v[r]) < v[i]) l++;
         else r--;
      }
   }
   
   return 0;
   
}
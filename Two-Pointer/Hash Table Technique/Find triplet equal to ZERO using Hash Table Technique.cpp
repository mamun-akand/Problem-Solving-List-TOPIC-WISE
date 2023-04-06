//"Find triplet equal to ZERO" using Hash Table Technique

#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {2,-6,-1,9,8,-3,-4,7,5};
   int n = v.size();
   
   for(int i=0; i<n; i++){
      set <int> s; //Hash Table Technique
      for(int j=i+1; j<n; j++){
         int sum = v[i]+v[j];
         int F = -sum;
         if(s.find(F) != s.end()){
            cout << F << " " << v[i] << " " << v[j] << endl;
         }
         s.insert(v[j]);
      }
   }
   //Time Complexity: O(n^2);
   //Auxiliary Complexity: O(1);
   //Auxiliary Complexity: O(1);
   
   return 0;
}
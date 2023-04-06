//"Find 4 numbers equal to X" using Two-Pointers
//Bruteforce korle N^4, but using two-pointer gonna redece one loop. So, N^3. 
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {2,4,6,8,0};
   int x = 18;
   
   sort(v.begin(), v.end());
   
   for(int i=0; i<v.size(); i++){
      for(int j=i+1; j<v.size(); j++){
         int l = j+1;
         int r = v.size()-1;
         //Two-Pointers
         while(l<r){
            if(v[i] + v[j] + v[l] + v[r] == x){
               cout << v[i] << " " << v[j] << " " << v[l] << " " << v[r] << endl;
            }
            if( (v[i] + v[j] + v[l] + v[r]) < 0) l++;
            else r--;
         }
      }
   }
   //Time Complexity: O(n^3) 
   
   return 0;
   
}
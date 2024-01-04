#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   // no of permutation N!;
   
   int n = 3;
   int ara[] = {3,1,2,2}; // ekta 2 auto skip, cause permutation e sob unique
   
   sort(ara, ara+3);   //sort na korle given array theke porer tuku ashbe
   
   //basic
      /*
      
      next_permutation(ara, ara+3); //array or vector ke modify kore rakhe
      
      for(ll i=0; i<n; i++){
         cout << ara[i] << " ";
      }
      
      */
   
   //All permutaions (next_permutaion)
   
      do{
         for(ll i=0; i<n; i++){
            cout << ara[i] << " ";
         }
         cout << endl;
      } while(next_permutation(ara, ara+3));
      
   
   //All permutaions (prev_permutaion)
   
      /*  
       
      int ara2[] = {3,1,2};
      sort(ara2, ara2+n, greater<int>());
      
      do{
         for(ll i=0; i<n; i++){
            cout << ara2[i] << " ";
         }
         cout << endl;
      } while(prev_permutation(ara2, ara2+3));
      
      */ 
     
}

//TC: O(N*N!)
//next_permutation() takes O(N) time to find,
//and there are N! number of permutations for an array of size N.
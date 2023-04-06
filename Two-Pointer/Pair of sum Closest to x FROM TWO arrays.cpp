//Pair of sum Closest to x FROM TWO different array
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v1 = {10, 9, 11, 15, 2, 7, 17, 8};
   vector<int> v2 = {1, 3, 5, 9, 7, 11, 13, 15};
   int x=33;
   
   sort(v1.begin(), v1.end());
   sort(v2.begin(), v2.end());
   
   int l=0;
   int r=v2.size()-1;
   
   int dif=INT_MAX, closest_sum=0, indx1=0, indx2=0;
   
   while((l<v1.size()) && (r >= 0)){
      int sum= v1[l] + v2[r];
      int d = abs(sum-x);
      if(d<dif){
         dif = d;
         closest_sum = sum;
         indx1=l;
         indx2=r;
      }
      if(sum>x) r--;
      else l++;
   }
   
   cout << v1[indx1] << " and " << v2[indx2] << "'s sum "<< closest_sum << endl;
   return 0;
}
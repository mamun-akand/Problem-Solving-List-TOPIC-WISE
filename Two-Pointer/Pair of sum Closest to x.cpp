//Pair of sum Closest to x using Two-Pointers
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {10, 9, 11, 15, 2, 7, 17, 8};
   int x=14;
   
   sort(v.begin(), v.end());
   
   int l=0;
   int r=v.size()-1;
   
   int dif=INT_MAX, closest_sum=0, indx1=0, indx2=0;
   
   while(l<r){
      int sum= v[l] + v[r];
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
   
   cout << v[indx1] << " and " << v[indx2] << "'s sum "<< closest_sum << endl;
   return 0;
}
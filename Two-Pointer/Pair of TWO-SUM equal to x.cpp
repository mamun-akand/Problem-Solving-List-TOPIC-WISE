//Pair of sum equal to x using Two-Pointers
//Two Pointers O(n*log n) for sort() function
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {5, 7, 9, 3, 2, 1, 4, 6, 8};
   int x=14;
   
   sort(v.begin(), v.end()); //O(n*log n)
   
   int l=0;
   int r=v.size()-1;
   
   while(l<r){
      int sum=v[l]+v[r];
      if(sum==x){
         cout << "Found equal to " << x << endl;
         return 0;;
      }
      if(sum>x) r--;
      else l++;
   }
   
   cout << "NOT FOUND" << endl;
   return 0;
}
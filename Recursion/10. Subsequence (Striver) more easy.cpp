#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define vll vector<ll>

vll temp; int n;

void subseq(int i, vll v){
   if(i>=n){
      for(auto it:temp){
         cout << it << " ";
      }
      if(temp.size() == 0){
         cout << "{ }";
      }
      cout << endl;
      return;
   }

   //take
   temp.push_back(v[i]);
   subseq(i+1, v);
   
   temp.pop_back();
   
   //not take
   subseq(i+1, v);
}

int main(){
   n=3;
   vll v = {1, 2, 3};
   subseq(0, v);
}
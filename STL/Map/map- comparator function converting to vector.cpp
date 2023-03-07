#include<bits/stdc++.h>
using namespace std;

// //Only a value
// bool cmp(pair<int,int>a, pair<int,int>b){
   // return a.second > b.second;
// }

bool cmp(pair<int,int>a, pair<int,int>b){
   if(a.second != b.second)
      return a.second > b.second;
   else
      return a.first > b.first;
}

int main(){
   
   map <int, int> mp={ {2,4},{5,2},{3,3},{1,3},{4,2} };
   
   vector<pair<int,int>> v(mp.begin(), mp.end());
   
   sort(v.begin(), v.end(),cmp);
   
   for(auto it:v){
      cout << it.first << " " << it.second << endl;
   }  
      
}


















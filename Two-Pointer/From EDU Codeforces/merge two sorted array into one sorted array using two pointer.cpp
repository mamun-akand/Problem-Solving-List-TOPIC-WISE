#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> a={1,2,3,6,8,10,12,14};
   vector<int> b={4,5,7,9,11,13,15};
   vector<int> merge;
   
   int la = 0;
   int lb = 0;
   
   while(la<a.size() || lb<b.size()){
      if(a[la]<b[lb] && la<a.size()){  
         merge.push_back(a[la]);
         la++;
      }
      else{
         if(lb<b.size())
         merge.push_back(b[lb]);
         lb++;
      }
   }
   
   for(int i=0; i<merge.size(); i++){
      cout << merge[i] << " ";
   }
   
}
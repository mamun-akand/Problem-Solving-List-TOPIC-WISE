#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, m; cin>>n>>m;
   vector<int> a(n), b(m);
   vector<int> merge;
   
   for(auto &it : a){
      cin>>it;
   }
   
   for(auto &it : b){
      cin>>it;
   }
   
   int la = 0;
   int lb = 0;
   int cnt=0;
   while(la<a.size() || lb<b.size()){
      if(a[la]<b[lb] && la<a.size()){  
         la++;
         cnt++;
      }
      else{
         if(lb<b.size())
         cout << cnt << " ";
         lb++;
      }
   }
}
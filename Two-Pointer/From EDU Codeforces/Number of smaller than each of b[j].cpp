//Number of smaller than each of b[j]
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> a={1,2,3,6,8,10,12,14};
   vector<int> b={4,5,7,9,11,13,15};
   vector<int> res;
   
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
         cout << cnt << " num before " << b[lb]<< " of b array" << endl;
         lb++;
      }
   }
   
}
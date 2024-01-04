#include<bits/stdc++.h>
using namespace std;

int main(){
   vector <int> v  = {1,2,2,3,3,3,3,4,4};
   
   auto it = lower_bound(v.begin(), v.end(), 3);
   auto itt = upper_bound(v.begin(), v.end(), 3);
   
   cout << (itt-it) << endl;
   
}
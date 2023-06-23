#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Reverse(vector<int> &v, int l, int r){
   if(l>r) return;
   swap(v[l], v[r]);
   Reverse(v, l+1, r-1);
}

int main(){
   vector <int> v{1,2,3,4,5};
   Reverse(v, 0, 4);
   for(auto it:v){
      cout << it << " ";
   }
}
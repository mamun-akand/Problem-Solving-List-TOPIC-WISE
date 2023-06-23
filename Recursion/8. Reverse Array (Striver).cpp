#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Reverse(vector<int> v, int i, int size){
   if(i==size) return;
   Reverse(v, i+1, size);
   cout << v[i] << " ";
}

int main(){
   vector <int> v{1,2,3,4,5};
   Reverse(v, 0, 5);
}
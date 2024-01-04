#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+9;
int a[N], d[N];

int main(){
   int n = 5;
   a[1] = 1, a[2] = 3, a[3] = 5, a[4] = 2, a[5] = 4;
   
   //dif array
   for(int i=1; i<=n; i++){
      d[i] = a[i] - a[i-1];
   }
   
   for(int i=1; i<=n; i++){
      cout << d[i] << ' ';
   }
   cout << endl;
   
   //original array
   for(int i=1; i<=n ; i++){
      a[i] = a[i-1] + d[i];
   }
   
   for(int i=1; i<=n; i++){
      cout << a[i] << ' ';
   }

}
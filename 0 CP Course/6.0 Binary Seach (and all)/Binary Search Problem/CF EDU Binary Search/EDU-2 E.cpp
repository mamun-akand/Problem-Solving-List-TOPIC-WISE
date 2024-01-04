// URL: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E
#include<bits/stdc++.h>
using namespace std;
using ld = long double;

ld c;
bool monotonic(ld x){
   ld ans = x*x + sqrt(x);
   return ans <= c; 
}

int main(){
   cin>>c;
   ld l = 0, r=1e5, ans;
   while(r-l >= 1e-7){
      ld mid = l + (r-l)/2.0;
      if(monotonic(mid)){
         ans = mid;
         l = mid;
      }
      else{
         r = mid;
      }
   }
   cout << fixed << setprecision(7) << ans << endl;
}
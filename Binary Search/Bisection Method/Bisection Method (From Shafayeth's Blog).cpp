//Finding sqrt using "Bisection Method" from Shafayets Blog
//http://www.shafaetsplanet.com/?p=2295&fbclid=IwAR3Tm6khM9MmveV0u76YUMIH6wYae3hFbD8XdgLn90PEG1tARhU6hb-MoUQ

#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long ll;

ld mySqrt(ld n){
   ld Low=0, High=n, Mid;
   ll range=64;
   
   // while((High-Low) > 0.0001){
   while(range--){
      Mid = (Low+High)/2.0;
      cout << Low <<" "<< High <<" "<< Mid <<" "<< Mid*Mid << endl;
      
      if(Mid*Mid > n) High = Mid;
      else Low = Mid;
   }
   
   return Mid;  
}

int main(){
   
   cout << mySqrt(15) << endl;
   
}
#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int x = 10, y = 20;
   
   //using xor
   x = x^y;
   y = y^x;   // y = y^(x^y) = x
   x = x^y;   // x = (x^y)^x = y
   
   cout << x << " " << y << endl;
   
   //using addition Subtraction
   int a = 10, b = 20;
   
   a = a + b;
   b = a - b;
   a = a - b;
   
   cout << a << " " << b << endl;
   
}
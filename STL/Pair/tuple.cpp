#include<bits/stdc++.h>
using namespace std;

int main(){
   
   //inside any numbers of data type can be used.
   tuple<int, double, char, string> t = {1, 5.00, 'M', "Mamun"};
   
   cout<< get<0>(t) <<" "<< get<1>(t) <<" "<< get<2>(t) <<" "<<get<3>(t)<<endl;
   
   //using stuctured binding
   auto [m, x, y, z] = t;
   cout << m << " " << x << " " << y << " " << z << endl;
   
   //using tie
   int a; double b; char c; string s;
   tie(a,b,c,s) = t;
   cout << a << " " << b << " " << c << " " << s << endl;

}

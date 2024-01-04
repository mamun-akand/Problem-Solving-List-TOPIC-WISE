#include<bits/stdc++.h>
using namespace std;

int main(){
   
   //inside any numbers of data type can be used.
   tuple<int, double, char, string> t = {1, 5.00, 'M', "Mamun"};
   
   t = {2, 5.00, 'M', "Mamun"};
   t = make_tuple(3, 5.00, 'M', "Mamun");
   
   cout << get<0>(t) <<" "<< get<1>(t) <<" "<< get<2>(t) <<" "<< get<3>(t) <<endl;
   
   auto [a, x, y, z] = t;
   cout << a << " " << x << " " << y << " " << z << endl;
   
}

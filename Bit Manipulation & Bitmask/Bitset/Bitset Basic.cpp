#include<bits/stdc++.h>
using namespace std;

int main(){
   
   bitset<15> v1(11);
   bitset<15> v2(string("1011"));
   
   cout << v1 << endl;
   cout << v2 << endl;
   
   cout << v1[0] << endl; //i'th bit print
   cout << v1[2] << endl; //i'th bit print
   
   cout << v1.to_ullong() << endl; //Binary to Unsigned long long
   cout << v1.count() << endl;     //Print number of set bits
   
}
#include<bits/stdc++.h>
using namespace std;

int main(){
   
   //string legicographical comparison
   string a = "abc";
   string b = "abcd";
   
   cout << boolalpha << (a < b)  << endl;
   cout << boolalpha << (a > b)  << endl;
   cout << boolalpha << (a == b) << endl;
   cout << boolalpha << min(a,b) << endl;
   cout << boolalpha << max(a,b) << endl;
   
   cout << endl << "For Vector:" << endl << endl;
   
   //vector legicographical comparison
   vector<int> v({1,2,3}), v2({1,2,3,4});
   
   cout << boolalpha << (v < v2) << endl;
   cout << boolalpha << (v > v2) << endl;
   cout << boolalpha << (v == v2) << endl;
}
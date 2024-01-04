#include<bits/stdc++.h>
using namespace std;

int main(){
   string s (5, 'a');
   cout << s << endl;
   
   s = "Ma mun mun";
   auto it  = s.find("mun");    // first occurance
   auto itt = s.rfind("mun");   // last occurance
 
   cout << it << endl;
   cout << itt << endl;
}

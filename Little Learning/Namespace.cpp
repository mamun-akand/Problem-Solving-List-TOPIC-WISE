#include<bits/stdc++.h>
using namespace std;

namespace myNamespace1{
   void myFunc(){
      cout << "My 1st Function" << endl;
   }
}

namespace myNamespace2{
   void myFunc(){
      cout << "My 2nd Function" << endl;
   }
}

int main(){
   myNamespace1::myFunc();
   myNamespace2::myFunc();
}
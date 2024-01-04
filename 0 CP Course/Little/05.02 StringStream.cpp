#include<bits/stdc++.h>
using namespace std;

int main(){
   string s = "123    456     789";
   stringstream ss(s);
   
   int a, b, c; ss>>a>>b>>c;
   cout << a << " " << b << " " << c << endl;
   
   //
   
   string s2 = "Mamun    123 Liza";
   stringstream any(s2);
   
   string x, y, z; any >> x >> y >>z;
   cout << x << " " << y << " " << z << endl;
   
   //
   
   string s3 = "Akand    123 Liza 456  Mamun  ";
   stringstream custominput(s3);
   
   string str;
   while(custominput>>str){
      cout << str << endl;
   }
   
}
#include<bits/stdc++.h>
using namespace std;

int main(){
   
   bitset<15> v1(11);
   bitset<15> v2("1011");
   
   cout << v1 << endl;
   cout << v2 << endl;
   
   cout << v1[0] << endl;             //i'th bit print
   cout << v1[2] << endl;             //i'th bit print
   
   cout << v1.to_ullong() << endl;    //Binary to Unsigned long long
   cout << v2.to_string() << endl;    //Convert to string
   cout << v1.count() << endl;        //Print number of set bits
   
   //YouKnowWho 
   cout << endl << "YouKnowWho" << endl;
   
   bitset<11> bs("10001001011"), p(10);
   
   cout << bs << endl;
   
   bs.flip();                        //flip all bits 0 to 1, 1 to 0
   cout << bs << endl;  
   
   bs.set(1);                         //set specific i'th bit 1
   cout << bs << endl;  
   
   bs.set();                          //set all bits 1
   cout << bs << endl; 

   bs.reset(2);                       //reset i'th bit 0
   cout << bs << endl; 
   
   bs.reset();                        //reset all bits 0
   cout << bs << endl;  
   
   bs = 10;
              
   cout << bs.any() << endl;         //if any bit is set (1) : True/False 
   cout << bs.none() << endl;        //if no bit is set (1) : True/False 
   cout << bs.all() << endl;         //if all bits are set (1) : True/False 
   cout << bs << endl;
   
   cout << ( bs << 1 ) << endl;        
   cout << ( bs >> 1 ) << endl;        
   cout << ( bs & p ) << endl;        
   cout << ( bs | p ) << endl;        
   cout << ( bs ^ p ) << endl;         
   cout << ( ~bs ) << endl;        
          
   
}
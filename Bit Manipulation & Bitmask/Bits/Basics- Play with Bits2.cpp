#include<bits/stdc++.h>
using namespace std;

#define   ll   long long int
#define   ln      cout<<"\n";

//Luv to_binary
void to_binary(int deci){
   for(int i=10; i>=0; i--){
      cout << ((deci >> i) & 1);
   }
   cout << endl;
}

int main(){
   int deci = 9;
   
   to_binary(deci);
   
   //Odd-Even Check. First right digit 1 hole Odd.
   if(deci & 1) cout << "Odd" << endl;
   else cout << "Even" << endl;
   
   //Multiply and Division by 2
   cout << (deci<<1) << endl;
   cout << (deci>>1) << endl;
   
   //Print binary of Characters
   for(char ch = 'A'; ch<='B'; ch++){
      cout << ch << endl;
      to_binary(int (ch));
   }
   
   for(char ch = 'a'; ch<='b'; ch++){
      cout << ch << endl;
      to_binary(int (ch));
   }
   
   //Capital to Smaller and Vice-Versa
   char ch_capital = 'A';
   char ch_smaller = ch_capital | (1<<5);
   cout << ch_smaller << endl;
   char capital = ch_smaller & (~(1<<5));
   cout << capital << endl;
   
   cout << char(1<<5) <<"Space"<< endl; //(1<<5) is equivalent to " " space ascii.
   
   cout << char ('E' | ' ') << endl;
   cout << char ('e' & (~' ')) << endl;
   cout << char ('e' & '_') << endl;
   
   //Power of 2
   cout << (1<<3) << endl; //2^3
   
   //Check if power of 2
   int n = 16;
   if( (n&(n-1)) == 0 )
      cout << "Power of 2" << endl; //Kono num ar er aager number AND korle          
   else                             // zero ashe. We can check this with Binary Bits.
      cout << "Not Power of 2" << endl;
      
}
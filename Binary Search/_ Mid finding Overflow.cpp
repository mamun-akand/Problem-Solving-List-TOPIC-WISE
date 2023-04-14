#include<bits/stdc++.h>
using namespace std;
#define   ll   long long int

int main(){
    
   int low  = INT_MAX-1;
   int high = INT_MAX;
   
   cout << low << endl << high << endl;
   
   int mid1 = (low+high)/2;       //it will get interger overflow.
   
   ll  mid11 = ((ll)low+high)/2;    //check with ll
   int mid2 = low + ((high-low)/2); //proper way to overcome overflow.
   
   cout << mid1 << endl;
   cout << mid11 << endl;
   cout << mid2 << endl;
   
}
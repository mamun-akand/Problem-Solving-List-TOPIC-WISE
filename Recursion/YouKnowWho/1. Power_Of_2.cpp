#include<bits/stdc++.h>
using namespace std;

int power_of_2(int n){
   if(n==0) return 1;
   
   return power_of_2(n-1) + power_of_2(n-1);
   // return power_of_2(n-1) * 2;
}

int main(){
  
   cout << power_of_2(5) << endl;
}

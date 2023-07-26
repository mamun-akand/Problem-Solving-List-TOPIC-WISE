#include<bits/stdc++.h>
using namespace std;
#define ll long long

int set_kth_bit_on(int x, int k){
   return x | (1<<k);
}

int set_kth_bit_off(int x, int k){
   return x & ~(1<<k);
}
int flip_kth_bit(int x, int k){ //toggle
   return x ^ (1<<k);
}

int main(){
   
   //power of 2 (2^3)
   cout << (1 << 3) << endl;
   cout << (1LL << 3) << endl;
   
   cout << set_kth_bit_on(10, 2) << endl;
   cout << set_kth_bit_off(10, 1) << endl;
   cout << flip_kth_bit (10, 2) << endl;
   
}
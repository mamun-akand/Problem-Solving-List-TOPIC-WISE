#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void swap2(int& a, int& b){
   int temp = a;
   a = b;
   b = a; 
}

int main(){
   
   int a=5, b=10;  
   
   swap(&a, &b);
   cout << a << " " << b << endl;
   
   swap(a, b);
   cout << a << " " << b << endl;
   
}
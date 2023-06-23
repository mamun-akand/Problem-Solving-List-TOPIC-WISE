#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sumOfNum(ll n){
   if(n==1) return 1;
   return n + sumOfNum(n-1);
} 

int main(){
   ll n=4;
   cout << sumOfNum(n) << endl;
}
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0) return 1;       //base case
    return n * factorial(n-1);
}

int main(){
    int fact = factorial(4);
    cout << fact << endl;
}

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n>1)
        return n * factorial(n-1);
    else
        return 1;
}

int main(){
    int fact = factorial(4);
    cout << fact << endl;
}

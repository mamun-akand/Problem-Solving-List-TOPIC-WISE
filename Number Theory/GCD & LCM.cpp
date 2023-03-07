#include<bits/stdc++.h>
using namespace std;

//log(n)

int gcd(int a, int b){                  // a = dividend, b = divisor
    if(a%b==0) return b;
    return gcd(b, a%b);
}

int main(){

    //GCD
    cout << gcd(18, 12) << endl;
    cout << gcd(12, 18) << endl;
    cout << __gcd(12, 18) << endl;      //inbuilt function

    cout << gcd(gcd(12, 18), 3) << endl; // GCD of 3 numbers

    //LCM
    cout << (12*18)/gcd(12, 18) << endl;

}

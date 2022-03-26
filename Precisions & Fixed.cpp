#include<bits/stdc++.h>
using namespace std;

int main(){

    double n = 345.123456;

    cout << setprecision(5) << n << endl;            //setprecision means after & before floating number together.
    cout << fixed << setprecision(5) << n << endl;  // fixed means precision counted only after floating point.
    cout << fixed << setprecision(9) << n << endl;


    return 0;

}

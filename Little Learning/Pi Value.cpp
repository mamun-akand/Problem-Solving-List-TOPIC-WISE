#include<bits/stdc++.h>
using namespace std;

int main(){

    //printing pi values up to N decimal places.

    int N;
    cin >> N;

    double pi = acos(-1);
    printf("%.*lf\n", N, pi);


    //Using M_PI Function.
    printf("%.*lf\n", 50, M_PI*10*10);

    //Using cout
    cout << setprecision(N) << fixed;
    cout << M_PI*10*10 << endl;

    return 0;

}

#include<bits/stdc++.h>
using namespace std;

int main(){

    int r;
    cout << "Enter radius : ";
    cin >> r ;

    double pi = acos(-1);

    cout << setprecision(50) << fixed ;
    cout << "perimeter is : " << 2*M_PI*r << endl;

    return 0;
}

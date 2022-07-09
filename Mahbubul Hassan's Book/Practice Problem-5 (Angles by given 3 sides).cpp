#include<bits/stdc++.h>
using namespace std;

int main(){

    double a, b, c, A, B, C;

    cout << "Enter three sides length :" << endl;
    cin >> a >> b >> c;

    A = acos((b*b + c*c - a*a)/(2*b*c)); //Formula : cos(A) = (b*b + c*c - a*a)/(2bc);
    B = acos((a*a + b*b - c*c)/(2*a*b));
    C = acos((a*a + c*c - b*b)/(2*a*c));

    //Radian to degree
    double pi = acos(-1);

    A = A*(180/pi);
    B = B*(180/pi);
    C = C*(180/pi);

    cout << fixed << setprecision(2);
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;

}

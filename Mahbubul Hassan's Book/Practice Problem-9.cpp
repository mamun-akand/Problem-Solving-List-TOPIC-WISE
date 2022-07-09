#include<bits/stdc++.h>
using namespace std;

int main(){

    int x1, y1, x2, y2, x3, y3;
    cout << "Enter three vertex: " << endl;

    cout << "x1 y1 : "; cin >> x1 >> y1;
    cout << "x2 y2 : "; cin >> x2 >> y2;
    cout << "x3 y3 : "; cin >> x3 >> y3;

    double a = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );
    double b = sqrt( pow(x3-x1, 2) + pow(y3-y1, 2) );
    double c = sqrt( pow(x2-x3, 2) + pow(y2-y3, 2) );

    double s = (a+b+c)/2;
    double area = sqrt(s*(s-1)*(s-b)*(s-c));

    cout << area << endl;

    return 0;

}

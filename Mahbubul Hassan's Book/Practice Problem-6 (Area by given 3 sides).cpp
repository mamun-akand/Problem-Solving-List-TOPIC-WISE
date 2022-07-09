#include<bits/stdc++.h>
using namespace std;

double tri_area(double a, double b, double c){

    double s = ((a+b+c)/2);
    double area = sqrt(s*(s-a)*(s-b)*(s-c));

    return area;
}

int main(){

    cout << "Enter Three sides length : ";
    double x, y, z;

    cin >> x >> y >> z;
    cout << "Area is : " << tri_area(x, y, z) << " unit^2";

    return 0;
}



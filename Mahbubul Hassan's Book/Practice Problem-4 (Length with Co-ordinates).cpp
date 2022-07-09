#include<bits/stdc++.h>
using namespace std;

void distance(double x1, double y1, double x2, double y2){

    double len = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    cout << "length is : " << len << endl;
}

int main(){
    double x1, y1, x2, y2;

    cout << "Enter first co-ordinates: ";
    cin >> x1 >> y1;

    cout << endl << "Enter second co-ordinates: ";
    cin >> x2 >> y2;

    distance(x1, y1, x2, y2);

}

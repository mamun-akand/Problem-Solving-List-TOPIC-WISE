#include<bits/stdc++.h>
using namespace std;

int main(){

    int x1, y1, x2, y2;

    cout << "Enter x1: " << endl;
    cin >> x1;

    cout << "Ener y1: " << endl;
    cin >> y1;

    cout << "Enter x2: " << endl;
    cin >> x2;

    cout << "Ener y2: " << endl;
    cin >> y2;

    //double dist = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
    double dist = sqrt(pow(x2-x1, 2) +
                       pow(y2-y1, 2));

    cout << dist << endl;

    return 0;

}

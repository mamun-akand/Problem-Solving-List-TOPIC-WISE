#include<bits/stdc++.h>
using namespace std;

int main(){



//    //Number Soring inBuilt function
//    int x[] = {10, 7, 2, 4, 9,  8, 3, 5, 1, 6};
//
//    int n = sizeof(x) / sizeof(x[0]);
//
//    sort(x, x+n, greater<int>());       //greater<int>() is used for Decreasing order.
//
//    for(int i = 0 ; i < n ; i++){
//        cout << x[i] << " ";
//    }




    //String Soring inBuilt function

    string name;

    cin >> name;

    sort(name.begin(), name.end());

    cout << name << endl;

    return 0;

}

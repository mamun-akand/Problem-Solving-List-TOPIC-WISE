#include<bits/stdc++.h>
using namespace std;

int main(){

    int ara[5];
    int *point;

    for(int i=0 ; i<5 ; i++){
        cin >> ara[i];
    }

    //print values using pointer.
    for(int i=0 ; i<5 ; i++){
        cout << *(&ara[0]+i) << " ";
    }

    cout << endl;

    point = &ara[0];

    for(int i=0 ; i<5 ; i++){
        cout << point+i << " ";
    }



    return 0;

}

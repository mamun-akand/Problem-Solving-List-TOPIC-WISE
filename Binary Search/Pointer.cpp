#include<bits/stdc++.h>
using namespace std;

int main(){

    ///pointer of array
    int a[5] = {1, 2, 3, 4, 5};
    int s=3; int *ptr;

    for(int i=0; i<5; i++){
        if(a[i]==s) *ptr = &a[i];
    }

    cout << ptr << " " << (*ptr) << endl;   //ptr address, *ptr value

    ///pointer of variable
    int x = 5;
    int *ptr2 = &x;

    cout << ptr2 << " " << *ptr2 << endl;
}

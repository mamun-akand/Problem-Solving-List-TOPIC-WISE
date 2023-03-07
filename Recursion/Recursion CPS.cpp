#include<bits/stdc++.h>
using namespace std;

//Recursion  : O(n) //Originally : O(2n) Forward + backtrack

int cnt = 4;

int fac(int n){

    if(n==0) return 1;

    cnt++; cout << cnt;

    int ret = n * fac(n-1);

    cout << endl << ret;
    cout << " Okay";

    return ret;

}

int main(){
    int num=5;

    cout << fac(num) << " Main" << endl;
}

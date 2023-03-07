#include<bits/stdc++.h>
using namespace std;

int sum(int N, int a[]){
    if(N==0) return a[0];
    return a[N] + sum(N-1, a);
}

int main(){
    int a[] = {25,20,15,10,5};

    cout << sum(4, a) << endl;  // 0 - 4 : 4 max index
}

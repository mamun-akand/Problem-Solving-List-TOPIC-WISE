#include<bits/stdc++.h>
using namespace std;

int d_sum(int n){
    if(n==0) return 0;

    return n%10 + d_sum(n/10);
}

int main(){
    cout << d_sum(2349) << endl;
}

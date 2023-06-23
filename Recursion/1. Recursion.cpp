#include<bits/stdc++.h>
using namespace std;

void func(int n){
    if(n==0) return;            // base function
   // cout << n << endl;
    func(n-1);                  /// recursive function
    cout << n << endl;
}

int main(){
    func(5);
}

// Time Complexity:
// 1. Number of function calls         --> n
// 2. Time complexity of each function --> O(1) [Here O(1), if loop O(n)]
// Final TC: n * O(1)

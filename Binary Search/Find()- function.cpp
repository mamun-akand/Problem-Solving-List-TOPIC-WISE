#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {5, 1, 3, 4, 2};
    int q = 3;
    auto it = find(v.begin(), v.end(), q);
    int index = it-v.begin();
    cout << index << endl;
}

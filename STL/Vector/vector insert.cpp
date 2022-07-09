#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v={1, 2, 3, 4};
    vector <int>::iterator it = v.begin();

    v.insert(it, 11); it--;

    cout << *it << endl;
}

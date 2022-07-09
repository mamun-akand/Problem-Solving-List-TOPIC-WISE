#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {4, 3, 5, 1, 2};

    sort(v.begin(), v.end(), greater<int>());

    for(int i=0 ; i<v.size(); i++){
        cout << v[i] << endl;
    }
}

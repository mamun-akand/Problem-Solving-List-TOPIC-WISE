#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {1,2,3};

    v.push_back(4);
    v.emplace_back(5);
    //emplace_back faster than push_back

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " " ;
    }
}

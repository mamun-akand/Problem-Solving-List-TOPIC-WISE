#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v={1, 2, 3, 4};
    vector <int>::iterator it = v.begin()+2;

    v.insert(it, 11);

    for(auto pos:v){
       cout << pos << " ";
    }
}

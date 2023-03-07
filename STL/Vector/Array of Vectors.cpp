#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v[3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            v[j].push_back(i);
        }
    }

    for(int i=0; i<3; i++){
        for(auto it : v[i]){
            cout << it << " ";
        }
    }
}


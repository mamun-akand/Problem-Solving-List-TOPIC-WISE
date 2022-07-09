#include<bits/stdc++.h>
using namespace std;

void printVec(vector <int> vec){
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }

//    vec.push_back(10);
    cout << endl;
}

int main(){

    vector <int> v; //v(5,3) = v(vector prefill);

//    v.push_back(4);
//    v.push_back(5);
//    v.pop_back();

    for(int i=0; i<6; i++){
        int x; cin >> x;
        v.push_back(x);
    }

//    printVec(v);
//    vector <int> &v2 = v; //vector reference

//    printVec(v2);
//    cout << v[3] << " ";
//    cout << v2[3];

//    ///Vector for string.
//    vector <string> s;
//    for(int i=0; i<5; i++){
//        string x; cin >> x;
//        s.push_back(x);
//    }
//
    printVec(v);

}

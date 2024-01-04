#include<bits/stdc++.h>
using namespace std;

int main(){
//    pair <string, double> p;
//
////    p = make_pair("Mamun", 30);
//    p = {"Mamun", 30};
//
//    pair <string, double> &p1 = p;
//
//    p1.first = "Akand";
//    p1.second = 28;
//
//    cout << p.first << " " << p.second << endl;
//    cout << p1.first << " " << p1.second << endl;

/// Pair of Array

    string m[3] = {"Labib", "Saad", "Mamuns"}; //for example only
       int n[3] = {1, 2, 3}; //for example only

    pair <string, int> a[3];

    a[0] = {"Labib", 1};
    a[1] = {"Saad", 2};
    a[2] = {"Mamuns", 3};

//    swap(a[0], a[2]);
    sort(a, a+3, compare.second);

//    for(int i=0; i<3; i++){
//        cout << a[i].first << " " << a[i].second << endl;
//    }

    for(auto it : a){
        cout << it.first << " " << it.second << endl;
    }
    
    //pair of pair
    pair<pair<int, int>, int> a = { {1,2}, 3 };
    cout<< a.first.first <<" "<< a.first.second <<" "<< a.second << endl;
    
    //structured binding
    auto [x, y] = a;
    cout << x.first << " " << x.second << " " << y << endl;

}

#include<bits/stdc++.h>
#define ll __int64
using namespace std;

int main(){

    ///In the same way it works for map.

    set <ll> mp={1,10,3,5};
//
//    auto pos = mp.find(2);
//
//    for(auto it = pos; it!=mp.end(); it++){
//        cout << *it << " ";
//    }

    ///Number not present

    auto pos = mp.find(10);

    if(pos != mp.end()) cout << *pos << endl;
    else cout << "Not Found" << endl;
}

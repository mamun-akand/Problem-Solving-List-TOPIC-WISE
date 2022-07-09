#include<bits/stdc++.h>
using namespace std;

int main(){
    map <string, double> mp;

    mp["Mamun"] = 30;
    mp["Alizeh"] = 32;
    mp.insert(make_pair("Riyad", 34));
    mp.insert({"Mehu", 36});

//    for(auto it = mp.rbegin(); it != mp.rend(); it++){
//        cout << (*it).first << " " << it->second << endl;
//    }

//    for(auto it = mp.begin(); it != mp.end(); it++){
//        cout << (*it).first << " " << it->second << endl;
//    }

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

}

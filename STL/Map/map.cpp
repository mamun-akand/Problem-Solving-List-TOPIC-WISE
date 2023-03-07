#include<bits/stdc++.h>
using namespace std;

int main(){

//    map <int, int> mp;
//    map <int, int> :: iterator itr;
//
//    mp[13] = 111;
//    mp[18] = 101;
//    mp[5] = 121;
//    mp.insert({2, 133}); //map assign in this pair way.
//    mp.insert(make_pair(4, 130)); //map assign by a pair at a time.
//
//    for(itr = mp.begin(); itr != mp.end(); itr++){
//        cout << (*itr).first << " " << itr->second << endl;
//    }

    //another
    map <string, double> mp2;
    map <string, double>::iterator it;

    for(int i=0; i<3; i++){
        string name; double value;
        cin >> name >> value;

        mp2[name] = value;
    }

    for(auto it=mp2.begin(); it != mp2.end(); it++){
        cout << it->first << " " << it->second << endl;
        //(*(it+2)).first = arithmatic,
        //relational operation not possible as it's bidirectional
    }

    cout << "mp2 Size is : " << mp2.size() << endl;

    for(auto pr : mp2){      //another short way of printing.
        cout << pr.first << " " << pr.second << endl;
    }
}

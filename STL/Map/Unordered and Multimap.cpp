#include<bits/stdc++.h>
using namespace std;

void print(multimap <int, string> m){
    for(auto it : m){
        cout << it.first << " " << it.second << endl;
    }
}

int main(){

//    /// Unordered_Map
//    //[O(1) for unordered, O(log n) for map]
//
//    unordered_map <int, string> mp;
//    mp[8] = "a";
//    mp[7] = "b";
//    mp[5] = "c";
//
////    mp.erase(7);
////    mp.clear();
//
//    print(mp);

    /// MultiMap

    multimap <int, string> mp; //in multimap mp[5] = "a"; not wroks
    mp.insert({8,"a"});
    mp.insert({7,"b"});
    mp.insert({5,"c"});
    mp.insert(make_pair(5,"d"));

//    mp.erase(7);
//    mp.clear();

    print(mp);

}

#include<bits/stdc++.h>
using namespace std;

int main(){

    // Array
//
//    int n=7;
//    int a[n] = {1, 2, 4, 6, 8, 5, 25};
//
//    sort(a, a+n);
//    int q=2;
//
////    int *ptr = lower_bound(a, a+n, q);
//    int *ptr = lower_bound(a, a+n, q);
//
//    if(ptr==(a+n)){
//        cout << "Not Found" << endl;
//    }
//    else cout << *ptr << endl;


    /// Vector
//
//    int n=7;
//    vector<int> a = {1, 2, 4, 6, 8, 5, 25};
//
//    sort(a.begin(), a.end());
//    int q=2;
//
////    auto it = lower_bound(a.begin(), a.end(), q);
////    auto it = upper_bound(a.begin(), a.end(), q);
//
//    if(it==a.end()){
//        cout << "Not Found" << endl;
//    }
//    else cout << (*it) << endl;

    /// Set

    int n=7;
    set<int> s = {1, 2, 4, 6, 8, 5, 25};

//    sort(a.begin(), a.end()); //Sort no need in set
    int q=5;

//    auto it = lower_bound(a.begin(), a.end(), q); //In this way, time comeplexity : o(n)
//    auto it = upper_bound(a.begin(), a.end(), q);

    auto it = s.lower_bound(q); //In this way, time complexity : o(log n)
//    auto it = s.upper_bound(q); //In this way, time complexity : o(log n)

    if(it==s.end()){
        cout << "Not Found" << endl;
    }
    else cout << (*it) << endl;


    /// Map

//    int n=7;
//    map<int, int> mp;
//
//    for(int i=0; i<n; i++){
//        int x; cin >> x;
//        mp[x]++;
//    }
//
//    int q=5;
//
//    auto it = mp.lower_bound(q);  // in q place = key value
//
//    if(it==mp.end()){
//        cout << "Not Found" << endl;
//    }
//    else
//        cout << (*it).first << " " << it->second << endl;

}

#include<bits/stdc++.h>
using namespace std;

int main(){

    //Binary search always returns boolean 'true' or 'false'
    //Must need to increasing-sort first.

    vector<int> v;

    for(int i=0; i<10 ; i++){
        int x; cin>>x; v.push_back(x);
    }

    sort(v.begin(), v.end());

    int q; cin >> q;

    if(binary_search(v.begin(), v.end(), q)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;

}

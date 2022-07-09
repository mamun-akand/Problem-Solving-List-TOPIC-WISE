#include<bits/stdc++.h>
using namespace std;

int main(){

    string s, t;
    cin >> s >> t;

    reverse(t.begin(), t.end());

    int n = s.compare(t);

    if(n==0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;

}

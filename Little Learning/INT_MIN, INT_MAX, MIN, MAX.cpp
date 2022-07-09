#include<bits/stdc++.h>
using namespace std;

int main(){

//    cout << INT_MIN << endl; // holds variable's Minimum number
//    cout << INT_MAX << endl; // holds variable's Maximum number

    int ara[] = {1896, 189347, 17};

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i=0 ; i<3 ; i++){
        mini = min(mini, ara[i]);
        maxi = max(maxi, ara[i]);
    }

    cout << mini << endl << maxi ;

    //Max and Min among many numbers.
    int cnt[] = {10, 12, 3, 1};
    int s = min({cnt[0], cnt[1], cnt[2], cnt[3]});
    int b = max({cnt[0], cnt[1], cnt[2], cnt[3]});

    cout << s << endl << b << endl;

}

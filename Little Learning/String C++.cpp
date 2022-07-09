#include<bits/stdc++.h>
using namespace std;

int main(){

    /*

    char str[50];

    cin >> str;         //only prints first word like scanf("%s", str);
    cout << str;

    */

    /*

    char str[50];

    cin.get(str, 50);  // to get a line.
    cout << str;

    */

    string name;

    getline(cin, name); //c++ type to get a line with space. Unlimited Length.
    cout << name;

    return 0;
}

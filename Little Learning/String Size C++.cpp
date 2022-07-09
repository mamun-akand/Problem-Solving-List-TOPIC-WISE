#include<bits/stdc++.h>
using namespace std;

int main(){

    //C style method
    char ara[] = "Abdullah Al Mamun Akand";
    cout << strlen(ara) << endl;


    //name.size() & name.length()

    string str = "Abdullah Al Mamun Akand";

    cout << str.size() << endl;
    cout << str.length() << endl;

    cout << str[0] << str.size() << str[str.size()-1] << endl;

    return 0;

}

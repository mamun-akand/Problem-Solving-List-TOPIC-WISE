#include<bits/stdc++.h>
using namespace std;

int main(){
    ///string to int
    string i = "101010";
    int n = stoi(i);
    cout << n+1 << endl;

    ///Number to String
    string s1 = "Name";
    double a = 12.121212;
    string s2 = to_string(a);
    s1 = s1+s2;
    cout << s1 << endl;
}

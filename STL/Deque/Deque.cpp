#include<bits/stdc++.h>
using namespace std;

void print(deque <string> d){
    for(auto it:d){
        cout << it << " ";
    }
}

int main(){
    deque <string> dq = {"Mamun", "Akand"};

    dq.push_back("Alizeh");
    dq.push_front("Elizabeth");

    dq.push_back("Abdullah");
    dq.push_front("Abdullah");

    dq.pop_front();
    dq.pop_back();

    print(dq); cout << endl;

    cout << dq.front() << " "
         << dq.back()  << " "
         << dq.at(2) << endl;   //at() for index element printing.

    dq.at(2) = "*AKAND*";
    print(dq);
}

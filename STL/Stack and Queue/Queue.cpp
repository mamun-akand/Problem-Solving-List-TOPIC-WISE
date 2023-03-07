#include<bits/stdc++.h>
using namespace std;

int main(){
    queue <char> q;

    q.push('a');
    q.push('b');
    q.push('c');
    q.push('d');

    q.pop();

    while( !q.empty() ){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}

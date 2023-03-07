#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int> q;     //O(1) to find greatest or smallest whereas sort is O(n logn)

    q.push(8);
    q.push(25);
    q.push(3);
    q.push(13);

    cout << q.top() << endl;    //shows the greatest value
}

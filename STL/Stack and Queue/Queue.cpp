#include<bits/stdc++.h>
using namespace std;

int main(){
   
    //iterator can't be used in stack & queue
    
    queue<int> que ({1,2,3,4,5});
    
    while(!que.empty()){
       cout << que.front() << endl;
       que.pop();
    }
    
    //
    
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
    
    
    
}

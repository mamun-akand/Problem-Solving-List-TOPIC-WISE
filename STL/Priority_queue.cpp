#include<bits/stdc++.h>
using namespace std;

int main(){
   priority_queue<int> pq; // max-heap, top is biggest val
   
   //priority_queue<int,vector<int>, greater<int>> pq;
   //min-heap, top value smallest 
   
   pq.push(1);
   pq.push(3);
   pq.push(4);
   pq.push(2);
   pq.push(3);
   
   cout << "Size is: " << pq.size() << endl; //size
   cout << pq.top() << endl;
   
   //all elements printing
   while(!pq.empty()){
      cout << pq.top() << " ";
      pq.pop();
   }
}

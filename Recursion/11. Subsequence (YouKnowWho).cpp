#include<bits/stdc++.h>
using namespace std;
const int N = 25;

int n, ara[N];
bool is_taken[N];

void subSeq(int pos){
   if(pos > n){
      for(int i=1; i<=n; i++){
         if(is_taken[i] == 1){
            cout << ara[i] << ' ';
         }  
      }
      cout << endl;
      return;
   }
   // take
   is_taken[pos] = true;
   subSeq(pos+1);
   
   //not take
   is_taken[pos] = false;
   subSeq(pos+1);
}

int main(){
  cin>>n;
  for(int i=1; i<=n; i++){
     cin >> ara[i];
  }
  subSeq(1);
}
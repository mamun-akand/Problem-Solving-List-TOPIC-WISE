#include<bits/stdc++.h>
using namespace std;
const int N = 25;

int n, target, cnt=0, ara[N];
void subSeq(int pos, int cur_sum){
   if(pos > n){
      if(cur_sum == target){
         cnt++;
      }
      return;
   }
   // take
   subSeq(pos+1, cur_sum+ara[pos]);
   
   //not take
   subSeq(pos+1, cur_sum);
}
int main(){
  n = 4, target = 5;
  ara[1] = 1;
  ara[2] = 2;
  ara[3] = 3;
  ara[4] = 4;
  subSeq(1, 0);
  cout << cnt << endl;
}
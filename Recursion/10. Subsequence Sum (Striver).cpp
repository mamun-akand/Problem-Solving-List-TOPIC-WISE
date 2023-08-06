#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define vll vector<ll>

vll temp; int n, target, currentSum=0, cnt=0;

void subseq_sum(int i, vll v){
   if(i>=n){
      if(currentSum == target) cnt++;
      return;
   }

   //take
   currentSum += v[i];
   subseq_sum(i+1, v);
   currentSum -= v[i];
   
   //not take
   subseq_sum(i+1, v);
}

int main(){
   n=3, target=6;
   vll v = {6, 3, 3};
   subseq_sum(0, v);
   cout << cnt << endl;
}
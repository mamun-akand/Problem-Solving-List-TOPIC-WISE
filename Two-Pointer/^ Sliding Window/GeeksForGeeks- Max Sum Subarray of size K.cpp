// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr, int N){
   
   long L=0, sum=0, ans=0;
   for(int R=0; R<N; R++){
      sum += Arr[R];
      if(R-L+1 == K){
         ans = max(ans, sum);
         sum -= Arr[L];
         L++;
      }
   }
   
   return ans;
}

int main(){
   
   vector<int> v = {100, 200, 300, 400};
   int k=2, n=4;
   
	int x = maximumSumSubarray(k, v, n);
	
	cout << x << endl;
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int ara[] = {5,1,4,2,3};
   vector<int> v = {5,1,4,2,3};
   
   //accumulate gives total sum of array/vector
   int sum1 = accumulate(ara, ara+5, 0);            //Here 0 is initial sum
   cout << sum1 << endl;
   
   int sum2 = accumulate(v.begin(), v.end(), 0);    //Here 0 is initial sum
   cout << sum2 << endl;
   
}
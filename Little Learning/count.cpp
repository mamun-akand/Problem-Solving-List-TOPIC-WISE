#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int ara[] = {5,1,1,3,1};
   vector<int> v = {5,1,1,3,1};
   
   //count gives total number of given elemnts in the array/vector
   int sum1 = count(ara, ara+5, 1);
   cout << sum1 << endl;
   
   int sum2 = count(v.begin(), v.end(), 1);
   cout << sum2 << endl;
   
   
}
/*Consider this problem: There are N≤5000 workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30], representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job— maximize the number of days when both these workers are available.*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
   int n; cin>>n;
   vector<ll> v(n, 0);
   
   for(int i=0; i<n; i++){
      int avail_days; cin>>avail_days;
      int mask=0;
      for(int j=0; j<avail_days; j++){
         int x; cin>>x;
         mask = mask | (1<<x);
      }
      v[i] = mask;
   }
   
   int Max_days = 0;
   int person1 = -1;
   int person2 = -1;
   
   for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
         int intersection = (v[i] & v[j]);
         int common_days = __builtin_popcount(intersection);
         
         if(common_days > Max_days){
            Max_days = common_days;
            person1 = i;
            person2 = j;
         }
      }
      
   }
   
   cout << person1 << " " << person2 << " " << Max_days << endl;

}
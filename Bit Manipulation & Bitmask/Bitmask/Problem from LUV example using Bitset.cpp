/*Consider this problem: There are N≤5000 workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30], representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job— maximize the number of days when both these workers are available.*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
   int n; cin>>n;
   bitset<365> v[n];
   
   for(int i=0; i<n; i++){
      int avail_days; cin>>avail_days;
      for(int j=0; j<avail_days; j++){
         int x; cin>>x;
         v[i][x] = true;
      }
   }
   
   ll Max_days = 0;
   ll person1 = -1;
   ll person2 = -1;
   
   for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
         ll common_days = (v[i] & v[j]).count();
         
         if(common_days > Max_days){
            Max_days = common_days;
            person1 = i;
            person2 = j;
         }
      }
      
   }
   
    cout  << v[0] << endl
         << v[1] << endl
         << v[2] << endl;
   
   cout << person1 << " " << person2 << " " << Max_days << endl;

}
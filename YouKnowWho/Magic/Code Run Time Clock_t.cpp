#include <bits/stdc++.h>
using namespace std;

int main() {
  clock_t start = clock(); // Start the clock
  
  int n = 1e8;
  long long sum = 0;
  for (int i = 1; i <= n; i++) {
      sum += i;
  }
  
  clock_t end = clock(); // End the clock
  
  double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
  //Calculate the time taken, CLOCKS_PER_SEC is the number of clock ticks per second
  cout << "Time taken by program is : " << fixed << setprecision(5) << time_taken << " sec" << endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull power(ull x, ull n) { // O(log n)
  ull ans = 1;
  while (n > 0) {
    if (n & 1) {
      ans *= x;
    }
    x *= x;
    n >>= 1;
  }
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ull x = 1e9 + 7, n = 1e18;
  cout << power(x, n) << '\n'; // x^n mod 2^64
  return 0;
}

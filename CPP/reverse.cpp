#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, rn = 0, remainder;
  cin >> n;
  while(n) {
    remainder = n % 10;
    rn = rn * 10 + remainder;
    n /= 10;
  }

  cout << rn;

  return 0;
}
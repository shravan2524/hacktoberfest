#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  string ans = to_string(a);
  reverse(ans.begin(), ans.end());
  cout << ans << "\n";
}

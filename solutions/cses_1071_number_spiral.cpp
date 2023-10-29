/*                                                ____________
______________ ___________________________________<  /_  __ \
__  ___/_  __ `__ \  _ \_  ___/  ___/  _ \_  ___/_  /_  / / /
_(__  )_  / / / / /  __/  /   / /__ /  __/  /   _  / / /_/ /
/____/ /_/ /_/ /_/\___//_/    \___/ \___//_/    /_/  \____/
*/

#include <bits/stdc++.h>
using namespace std;

// Shorthands
using LL = long long;
using VI = vector<int>;
using VLL = vector<LL>;
using VVI = vector<VI>;
using VVLL = vector<VLL>;
using PI = pair<int, int>;
using PLL = pair<LL, LL>;
#define NL '\n'
#define PB push_back
#define MP make_pair
#define F(i, b, e) for (LL i = b; i < e; i++)
#define FI(i, b, e) for (LL i = b; i <= e; i++)
#define FR(i, e, b) for (LL i = e - 1; i >= b; i--)
#define FE(e, c) for (auto& e : c)

// Utilities
LL min(int a, LL b) { return a < b ? a : b; }
LL min(LL a, int b) { return a < b ? a : b; }
LL max(int a, LL b) { return a > b ? a : b; }
LL max(LL a, int b) { return a > b ? a : b; }

void solve();

// Testing
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif

  solve();
  cerr << "Runtime: " << (double)clock() / CLOCKS_PER_SEC << "s";
}

// Solution
void solve() {
  int t;
  cin >> t;

  F(i, 0, t) {
    LL y, x;
    cin >> y >> x;

    if (x >= y) {
      if (x & 1) {
        cout << x * x - y + 1;
      } else {
        cout << (x - 1) * (x - 1) + y;
      }
    } else {
      if (y & 1) {
        cout << (y - 1) * (y - 1) + x;
      } else {
        cout << y * y - x + 1;
      }
    }
    cout << NL;
  }
}

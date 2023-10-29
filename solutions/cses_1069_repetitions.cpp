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
  char curr, prev = 'Z';
  int seq = 1, maxSeq = 1;

  while (cin >> curr) {
    if (curr == prev) {
      seq++;
      maxSeq = seq > maxSeq ? seq : maxSeq;
    } else {
      seq = 1;
    }
    prev = curr;
  }

  cout << maxSeq;
}

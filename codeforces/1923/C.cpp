#include <bits/stdc++.h>
 
using namespace std;
 
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, q;
    cin >> n >> q;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }
    vector<int> pref(n + 1);
    for (int i = 0; i < n; i++) {
      pref[i + 1] = pref[i] + (c[i] == 1);
    }
    vector<int64_t> pref_sum(n + 1);
    for (int i = 0; i < n; i++) {
      pref_sum[i + 1] = pref_sum[i] + (c[i] - 1);
    }
    while (q--) {
      int l, r;
      cin >> l >> r;
      --l;
      int64_t sum = pref_sum[r] - pref_sum[l];
      int ones = pref[r] - pref[l];
      cout << (r - l == 1 || ones > sum ? "NO" : "YES") << '\n';
    }
  }
  return 0;
}
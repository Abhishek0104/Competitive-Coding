#include <bits/stdc++.h>
using namespace std;

void gi(int &x) {char ch = getchar(); x = 0; while (ch < '0' || ch > '9') ch = getchar(); while (ch >= '0' && ch <= '9') x = x * 10 + ch - 48, ch = getchar();}

int a, s[1002000], n, ans, i, j;

void doit() {
  gi(n); ans = 0;
  for (i = 1; i <= n; i++) {
    gi(a);
    ans = max(ans, s[a]);
    for (j = 1; j * j <= a; j++)
      if (a % j == 0) {
        s[j]++;
        if (j * j != a) s[a / j]++;
      }
  }
  cout << ans << endl;
  memset(s, 0, sizeof s);
}

int main() {int t; gi(t); while (t--) doit(); return 0;}

#include<bits/stdc++.h>
using namespace std;
int n, m, a, b, cnt;
unordered_set<string> s;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    if (a > b)
      swap(a, b);
    s.insert(to_string(a) + "," + to_string(b));
  }

  for (int i = 1; i < n+1; i++) {
    for (int j = i+1; j < n+1; j++) {
      for (int k = j+1; k < n+1; k++) {
        if (s.count(to_string(i) + ","+ to_string(j)) ||
            s.count(to_string(i) + ","+ to_string(k)) ||
            s.count(to_string(j) + ","+ to_string(k)))
          continue;
        else
          cnt++;
      }
    }
  }
  cout << cnt << "\n";
}
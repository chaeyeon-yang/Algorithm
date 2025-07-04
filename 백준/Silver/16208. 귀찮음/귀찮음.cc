#include<bits/stdc++.h>

using namespace std;

int n, ans;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    int now = v[i];
    int sum = 0;
    for (int j = i + 1; j < n; j++) {
      sum += v[j];
    }
    ans += now * sum;
  }
  cout << ans << endl;

  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int h, w, n;
int a, b;
vector<pair<int, int>> v;

bool canAttach(int h1, int w1, int h2, int w2) {
  if ((h1+h2 <= h && max(w1, w2)<=w) || max(h1, h2)<=h &&w1+w2<=w)
    return true;
  if ((h1 + w2 <= h && max(w1, h2) <= w) || (max(h1, w2) <= h && w1 + h2 <= w))
    return true;
  if ((w1 + h2 <= h && max(h1, w2) <= w) || (max(w1, h2) <= h && h1 + w2 <= w))
    return true;
  if ((w1 + w2 <= h && max(h1, h2) <= w) || (max(w1, w2) <= h && h1 + h2 <= w))
    return true;
  return false;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> h >> w;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    v.push_back({a, b});
  }

  int maxArea = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      int h1 = v[i].first, w1 = v[i].second;
      int h2 = v[j].first, w2 = v[j].second;

      if (canAttach(h1,w1,h2,w2)) {
        maxArea = max(maxArea, h1 * w1 + h2 * w2);
      }
    }
  }
  cout << maxArea << "\n";

  return 0;
}
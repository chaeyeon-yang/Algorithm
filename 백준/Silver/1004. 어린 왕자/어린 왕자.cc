#include <vector>
#include <iostream>
#include <tuple>

using namespace std;

int t, n, sx, sy, ex, ey, cx, cy, r, lx, rx, x, y;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> sx >> sy >> ex >> ey;
    cin >> n;
    vector<tuple<int, int, int>> v;
    int answer = 0;
    for (int j = 0; j < n; j++)
    {
      cin >> cx >> cy >> r;
      v.push_back({cx, cy, r});
    }
    for (int k = 0; k < v.size(); k++) {
      tie(cx, cy, r) = v[k];
      bool startInside = (sx - cx)*(sx - cx) + (sy - cy)*(sy - cy) < r*r;
      bool endInside   = (ex - cx)*(ex - cx) + (ey - cy)*(ey - cy) < r*r;
      if (startInside != endInside)
          answer++;
    }
    cout << answer << "\n";
  }

    return 0;
}
#include <string>
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int n, a;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  deque<pair<int, int>> dq(n);
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    dq[i] = {a, i + 1};
  }

  while (!dq.empty())
  {
    auto [num, idx] = dq.front();
    dq.pop_front();
    v.push_back(idx);
    if (num > 0)
    {
      for (int i = 0; i < num-1; i++) {
        dq.push_back(dq.front());
        dq.pop_front();
      }
    }
    else
    {
      for (int i = 0; i < -num; i++) {
        dq.push_front(dq.back());
        dq.pop_back();
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (i == n-1) {
      cout << v[i] << endl;
    } else
    cout << v[i] << " ";
  }

    return 0;
}

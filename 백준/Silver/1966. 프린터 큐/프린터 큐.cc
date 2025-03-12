#include<deque>
#include<iostream>
using namespace std;
int t, n, m, prio;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n >> m;
    deque<pair<int, int>> dq;
    for (int j = 0; j < n; j++) {
      cin >> prio;
      dq.push_back({j, prio});
    }
    pair<int, int> fi = make_pair(m, dq[m].second);
    int cnt = 0;
    while (true)
    {
      if (dq.empty()) {
        break;
      }
      pair<int, int> tmp = dq.front();
      int flag = 0;
      for (int k = 1; k < dq.size(); k++) {
        if (tmp.second < dq[k].second) {
          flag = 1;
          break;
        }
      }
      if (flag) {
        dq.push_back(tmp);
        dq.pop_front();
      } else {
        cnt++;
        if (tmp == fi) {
          cout << cnt << "\n";
          break;
        }
        dq.pop_front();
      }
    }
  }

  return 0;
}
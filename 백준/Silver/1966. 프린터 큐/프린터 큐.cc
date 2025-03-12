#include<iostream>
#include<queue>
using namespace std;
int t, n, m, prio;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  for (int i = 0; i < t; i++) {
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    int cnt = 0;
    cin >> n >> m;
    for (int j = 0; j < n; j++) {
      cin >> prio;
      q.push({j, prio});
      pq.push(prio);
    }
    while (!q.empty())
    {
      int index = q.front().first;
      int value = q.front().second;
      q.pop();
      if (pq.top() == value) {
        pq.pop();
        ++cnt;
        if (index == m) {
          cout << cnt << "\n";
          break;
        }
      } else
        q.push({index, value});
    }
  }

  return 0;
}
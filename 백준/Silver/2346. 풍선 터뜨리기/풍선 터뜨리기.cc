#include<bits/stdc++.h>
using namespace std;
int n;
deque<pair<int, int>> dq;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  int num;
  for (int i = 0; i < n; i++) {
    cin >> num;
    dq.push_back(make_pair(num, i + 1)); 
    // 이동해야할 수, 몇 번째
  }
  while(!dq.empty()) {
    int cur = dq.front().first;
    cout << dq.front().second << " ";
    dq.pop_front();
    if (dq.empty())
      break;
    if (cur > 0) {
      for (int i = 0; i < cur-1; i++) {
        dq.push_back(dq.front());
        dq.pop_front();
      }
    }
    else {
      for (int i = 0; i < (-1)*cur; i++) {
        dq.push_front(dq.back());
        dq.pop_back();
      }
        }
  }

  return 0;
}
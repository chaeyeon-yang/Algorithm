#include<queue>
#include<iostream>
using namespace std;
int n;
deque<int> dq;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  vector<int> action(n);
  for (int i = 0; i < n; i++) {
    cin >> action[i];
  }
  vector<int> res;
  for (int i = n; i >= 1; i--) {
    res.push_back(i);
  }

  for (int i = n-1; i >=0; i--) {
    int tmp = res[i];
    if (action[i] == 1) {
      dq.push_front(tmp);
    } else if (action[i] == 2) {
      int fi = dq.front();
      dq.pop_front();
      dq.push_front(tmp);
      dq.push_front(fi);
    } else if (action[i] == 3) {
      dq.push_back(tmp);
    }
  }
  while (!dq.empty()) {
    cout << dq.front() << " ";
    dq.pop_front();
  }


  return 0;
}
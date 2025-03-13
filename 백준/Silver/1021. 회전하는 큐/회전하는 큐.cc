#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;

  deque<int> dq;
  for (int i = 1; i <= n; i++) {
    dq.push_back(i);
  }

  vector<int> res(m);
  for (int i = 0; i < m; i++) {
    cin >> res[i];
  }

  int scnt = 0;

  for (int i = 0; i < m; i++) {
    int target = res[i];
    int cnt = 0;
    int index = 0;
    while (dq[index] != target) {
      index++;
    }
    if (index <= dq.size() / 2) {
      while (dq.front() != target) {
        dq.push_back(dq.front());
        dq.pop_front();
        cnt++;
      }
    } else {
      while (dq.front() != target) {
        dq.push_front(dq.back());  
        dq.pop_back();
        cnt++;
      }
    }
    dq.pop_front();
    scnt += cnt;
  }

  cout << scnt << endl;
  return 0;
}

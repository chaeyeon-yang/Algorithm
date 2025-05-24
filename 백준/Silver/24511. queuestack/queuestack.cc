#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int n, m;
deque<int> dq;
int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  cin >> n;
  vector<int> v(n);
  
  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (v[i] == 0) {
      dq.push_back(a);
    }
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    dq.push_front(x);
    cout << dq.back() << " ";
    dq.pop_back();
  }

    return 0;
}
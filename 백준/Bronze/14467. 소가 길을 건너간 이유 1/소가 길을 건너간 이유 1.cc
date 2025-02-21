#include<bits/stdc++.h>
using namespace std;
int n, a, b, cnt;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  int arr[11] = {0};
  int visited[11] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b;
    if (visited[a] == 0) {
      visited[a] = 1;
      arr[a] = b;
    }
    if (visited[a] && arr[a] != b) {
      cnt++;
      arr[a] = b;
    }
  }
  cout << cnt << "\n";

  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  vector<int> res;
  for (int i = 1; i <= v[0]; i++) {
    bool isY = true;
    for (int j = 0; j < n; j++)
    {
      if (v[j]%i != 0) {
        isY = false;
        break;
      }
    }
    if (isY) {
      res.push_back(i);
    }
    }
  for (int i : res) {
    cout << i << "\n";
  }

  return 0;
}
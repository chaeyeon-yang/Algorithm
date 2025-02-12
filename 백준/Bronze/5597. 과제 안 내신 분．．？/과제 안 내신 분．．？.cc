#include<bits/stdc++.h>
using namespace std;
int n, flag;
vector<int> v;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 0; i < 28; i++) {
    cin >> n;
    v.push_back(n);
  }
  for (int i = 1; i < 31; i++) {
    flag = 0;
    for (int j : v) {
      if (i == j)
        flag = 1;
    }
    if (flag) continue;
    else
      cout << i << "\n";
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int n, tmp, res, ma;
int rope[100000];
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> rope[i];
  }
  sort(rope, rope + n);
  ma = rope[n - 1];
  for (int i = n-1; i >= 0; i--) {
    tmp = rope[i] * (n - i);
    if (ma<tmp)
      ma = tmp;
  }
  cout << ma;
  return 0;
}
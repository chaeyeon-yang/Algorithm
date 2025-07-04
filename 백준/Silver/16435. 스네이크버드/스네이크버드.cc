#include<bits/stdc++.h>

using namespace std;

int n, l, a, ans;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> n >> l;
  vector<int> fruit(n);
  for (int i = 0; i < n; i++) {
    cin >> fruit[i];
  }
  sort(fruit.begin(), fruit.end());
  for (int i = 0; i < fruit.size(); i++) {
    if (fruit[i] <= l) {
      l+=1;
    }
  }

  cout << l << endl;

  return 0;
}
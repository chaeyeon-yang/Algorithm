#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int n;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  vector<int> tmp(n);
  for (int i = 0; i < n; i++) {
    cin >> tmp[i];
  }
  sort(tmp.rbegin(), tmp.rend());
  // 10 9 6 3 2
  // 10+4.5 = 14.5, 14.5+3 = 17.5, 17.5+1.5 = 19, 19+1=20

  double answer = tmp[0] + tmp[1] / 2.0;
  for (int i = 2; i < tmp.size(); i++)
  {
    answer += tmp[i] / 2.0;
  }
  cout << answer << endl;
  return 0;
}
#include<bits/stdc++.h>

using namespace std;

int n;
long long ans;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  vector<int> v(n);
  vector<int> tmp;
  for (int i = 0; i < n; i++)
    cin >> v[i];

  sort(v.begin(), v.end());
  for (int i = n - 1; i > 0; i--) {
    if (tmp.size()==0) {
      tmp.push_back(v[i]);
    }
    else {
      tmp.push_back(tmp[tmp.size() - 1] + v[i]);
    }
  }

  // for(int i: tmp) {
  //   cout << i << " ";
  // }
  // cout << "\n";

  int j = tmp.size()-1;
  for (int i = 0; i < n-1; i++)
  {
    int now = v[i];
    ans += now * tmp[j];
    // cout << now << " : " << tmp[j] << " \n";
    j--;
  }

  cout << ans << endl;

  return 0;
}
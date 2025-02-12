#include<bits/stdc++.h>
using namespace std;
int t, n, a;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[v.size() - 1] << "\n";
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int n, c, a;
map<int, int> mp;
map<int, int> mp_first;
vector<pair<int, int>> v;

bool compa(pair<int, int> x, pair<int, int> y) {
  if (x.first==y.first) {
    return mp_first[x.second] < mp_first[y.second];
  }
  return x.first > y.first;
}

int main() {
  cin >> n >> c;
  for (int i = 0; i < n; i++) {
    cin >> a;
    mp[a]++;
    if (!mp_first[a]) { 
      mp_first[a] = i+1;
    }
  }

  for (auto i : mp) {
    v.push_back({i.second, i.first});
  }
  sort(v.begin(), v.end(), compa);

  for (auto i: v) {
    for (int j = 0; j < i.first; j++) {
      cout << i.second << " ";
    }
  }
}
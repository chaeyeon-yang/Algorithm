#include<bits/stdc++.h>

using namespace std;

int n, m, k;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  cin >> n >> m;
  vector<pair<int, int>> frame; // 인덱스, 학생 번호
  map<int, int> mp; // 학생 번호, 추천받은 횟수
  // 인덱스(시간), 학생 번호, 추천받은 횟수
  for (int i = 0; i < m; i++) {
    cin >> k;
    bool flag = false;
    for (int j = 0; j < frame.size(); j++) {
      if (frame[j].second == k) {
        mp[k]++;
        flag = true;
        break;
      }
    }
    if (flag) continue;

    if (frame.size() < n) {
      frame.push_back({i, k});
      mp[k]++;
    } else {
      sort(frame.begin(), frame.end(), [&mp](pair<int, int> a, pair<int, int> b){
      if (mp[a.second] != mp[b.second]) 
        return mp[a.second] < mp[b.second];
      return a.first < b.first; });

      mp.erase(frame.front().second);
      frame.erase(frame.begin());
      frame.push_back({i, k});
      mp[k]++;
    }
  }
  sort(frame.begin(), frame.end(), [](pair<int, int> a, pair<int, int> b)
    { return a.second < b.second; });
  for (int i = 0; i < frame.size(); i++) {
    cout << frame[i].second << (i+1 == frame.size() ? "\n" : " ");
  }
  return 0;
}

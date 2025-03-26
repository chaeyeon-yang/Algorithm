#include <iostream>
#include <map>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int n;
string target;
vector<pair<int, string>> books;
int answer = INT_MAX;
// 필요한 문자를 포함하는지 확인하는 함수
bool canMake(map<char, int> need, string s) {
  map<char, int> have;
  for (char c : s) have[c]++;
  for (auto it : need) {
    if (have[it.first] < it.second) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> target >> n;
  books.resize(n);

  map<char, int> need;
  for (char c : target) need[c]++;

  for (int i = 0; i < n; i++) {
    cin >> books[i].first >> books[i].second;
  }

  // 모든 조합 탐색 (완전 탐색)
  for (int i = 0; i < (1 << n); i++) {
    string combined = "";
    int cost = 0;

    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {  // j번째 책 선택
        combined += books[j].second;
        cost += books[j].first;
      }
    }

    if (canMake(need, combined)) {
      answer = min(answer, cost);
    }
  }

  cout << (answer == INT_MAX ? -1 : answer) << "\n";

  return 0;
}

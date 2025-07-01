#include<bits/stdc++.h>

using namespace std;

char a, b, eng, kor;
string s;
int x, y, hand, tmp, answer;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // 모음: ㅏㅑㅓㅕ 자음: ㄱㄴㄷㄹ
  vector<vector<pair<int, char>>> v;
  v.push_back({
        {0, 'q'}, {0, 'w'}, {0, 'e'}, {0, 'r'}, {0, 't'},
        {1, 'y'}, {1, 'u'}, {1, 'i'}, {1, 'o'}, {1, 'p'}
    });

    v.push_back({
        {0, 'a'}, {0, 's'}, {0, 'd'}, {0, 'f'}, {0, 'g'},
        {1, 'h'}, {1, 'j'}, {1, 'k'}, {1, 'l'}
    });

    v.push_back({
        {0, 'z'}, {0, 'x'}, {0, 'c'}, {0, 'v'},
        {1, 'b'}, {1, 'n'}, {1, 'm'}
    });

    cin >> a >> b;
    cin >> s;

    pair<int, int> p1;
    pair<int, int> p2;
    for (int i = 0; i < v.size(); i++) {
      for (int j = 0; j < v[i].size(); j++) {
        tie(hand, eng) = v[i][j];

        if (eng == a) {
          p1.first = i;
          p1.second = j;
        }
        if (eng == b) {
          p2.first = i;
          p2.second = j;
        }
      }
    }
    // cout << "p1 : " << p1.first << ", " << p1.second << "\n";
    // cout << "p2 : " << p2.first << ", " << p2.second << "\n";

    for (char k : s) {
      bool flag = false;
      for (int i = 0; i < v.size(); i++)
      {
        tuple<int, int, int> fi;

        for (int j = 0; j < v[i].size(); j++) {
          tie(hand, eng) = v[i][j];
          if (eng == k) {
            // cout << "Eng : " << eng << " k: " << k << "\n";
            fi = make_tuple(hand, i, j);
            flag = true;
            break;
          }
        }
        if (flag) {
          tmp = 0;
          tie(hand, x, y) = fi;
          if (hand == 0) {
            // cout << "(x, y) = " << x << "," << y << "\n";
            // cout << "왼손 : p1 = " << p1.first << "," << p1.second << "\n";
            tmp = abs(x - p1.first) + abs(y - p1.second) + 1;
            p1.first = x;
            p1.second = y;
          }
          else {
            // cout << "(x, y) = " << x << "," << y << "\n";
            // cout << "오른손 : p2 = " << p2.first << "," << p2.second << "\n";
            tmp = abs(x - p2.first) + abs(y - p2.second) + 1;
            p2.first = x;
            p2.second = y;
          }
          // cout << tmp << " 번 누르기 ~~\n";
          answer += tmp;
          break;
        }
      }
    }

    cout << answer;

    return 0;
}
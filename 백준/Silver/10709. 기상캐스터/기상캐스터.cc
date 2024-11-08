#include<bits/stdc++.h>
using namespace std;
int h, w;
char a[104][104];
string s;
int main() {
  cin >> h >> w;
  int res[h][w];
  for (int i = 0; i < h; i++) {
    cin >> s;
    for (int j = 0; j < s.size(); j++) {
      a[i][j] = s[j];
    }
  }

  for (int i = 0; i < h; i++) {
    int loc = -1;
    for (int j = 0; j < w; j++)
    {
      if (a[i][j] == 'c') {
        loc = j;
        res[i][j] = 0;
      }
      if (a[i][j] == '.' && j > loc && loc!=-1) {
        res[i][j] = j - loc;
      }
      if (a[i][j] == '.' && loc == -1)
        res[i][j] = -1;
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << res[i][j] << " ";
    }
    cout << "\n";
  }
}
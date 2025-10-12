#include <bits/stdc++.h>

using namespace std;

char l, r;
string s;
int answer;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  char keyboard[3][10] = {
      {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
      {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'},
      {'z', 'x', 'c', 'v', 'b', 'n', 'm'}};

  cin >> l >> r;
  cin >> s;
  pair<int, int> lhand;
  pair<int, int> rhand;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      if (keyboard[i][j] == l) {
        lhand = {i, j};
      }
      if (keyboard[i][j] == r) {
        rhand = {i, j};
      }
    }
  }

  for (char c : s) {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 10; j++) {
        if (keyboard[i][j] == c) {
          if (c == 'q' || c=='w'|| c=='e'|| c=='r'|| c=='t'
          || c=='a'|| c=='s'|| c=='d'|| c=='f'|| c=='g'
          || c=='z'|| c=='x'|| c=='c'|| c=='v') {
            answer += abs(lhand.first - i);
            answer += abs(lhand.second - j);
            lhand = {i, j};
            answer++;
          } else {
            answer += abs(rhand.first - i);
            answer += abs(rhand.second - j);
            rhand = {i, j};
            answer++;
          }
        }
      }
    }
  }
  cout << answer << endl;
  return 0;
}
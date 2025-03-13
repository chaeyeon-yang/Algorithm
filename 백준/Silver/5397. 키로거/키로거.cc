#include<iostream>
#include<queue>
using namespace std;
int t;
string amho;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> amho;
    int cursor = 0;
    deque<char> dq;

    for (char c : amho) {
      if (c=='<') {
        if(cursor>0)
          cursor--;
      }
      else if (c != '<' && c != '>' && c != '-')
      {
        dq.insert(dq.begin() + cursor, c);
        cursor++;
      }
      else if (c == '>') {
        if(cursor < dq.size()) 
          cursor++;
      } else if (c=='-') {
        if (cursor > 0) {
          cursor--;
          dq.erase(dq.begin() +cursor);
        }
      }
    }
    while (!dq.empty()) {
      cout << dq.front();
      dq.pop_front();
    }
    cout << "\n";
  }
  return 0;
}
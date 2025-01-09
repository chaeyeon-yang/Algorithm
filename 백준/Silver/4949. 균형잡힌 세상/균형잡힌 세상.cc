#include <bits/stdc++.h>
using namespace std;

string s;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (true) {
    getline(cin, s);
    if (s == ".")
      break;

    stack<char> s1;
    bool isValid = true; 

    for (char c : s) {
      if (c == '(' || c == '[') {
        s1.push(c);
      } else if (c == ')') {
        if (!s1.empty() && s1.top() == '(') {
          s1.pop();
        } else {
          isValid = false;
          break;
        }
      } else if (c == ']') {
        if (!s1.empty() && s1.top() == '[') {
          s1.pop();
        } else {
          isValid = false;
          break;
        }
      }
    }

    if (!s1.empty()) {
      isValid = false;
    }

    if (isValid) {
      cout << "yes" << "\n";
    } else {
      cout << "no" << "\n";
    }
  }

  return 0;
}

#include <vector>
#include <iostream>
#include <stack>
#include <iomanip>

using namespace std;

int n, num;
string s;
// A: 65, a: 97
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  stack<double> calc;
  vector<int> v(n);

  cin >> s;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for(char c: s) {
    double a, b = 0;
    if (isalpha(c)) {
      calc.push(v[c-'A']);
    } else {
      double a = calc.top(); calc.pop();
      double b = calc.top(); calc.pop();

      if (c == '*') calc.push(b * a);
      else if (c == '/') calc.push(b / a);
      else if (c == '+') calc.push(b + a);
      else if (c == '-') calc.push(b - a);
    }
  }
  
  cout << fixed << setprecision(2) << calc.top() << endl;
  return 0;
}
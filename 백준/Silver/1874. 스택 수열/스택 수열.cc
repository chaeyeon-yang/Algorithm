#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;

int n;
stack<int> st;
vector<string> res;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  vector<int> v(n);
  vector<int> fi(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    fi[i] = v[i];
  }
  sort(v.begin(), v.end()); 

  int index = 0;
  for (int i = 0; i < n; i++) {
    st.push(v[i]);
    res.push_back("+");

    while (!st.empty() && st.top() == fi[index]) {
      st.pop();
      res.push_back("-");
      index++; 
    }
  }

  if (!st.empty()) {
    cout << "NO\n"; 
  } else {
    for (int i = 0; i < res.size(); i++) {
      cout << res[i] << "\n";
    }
    }
  return 0;
}

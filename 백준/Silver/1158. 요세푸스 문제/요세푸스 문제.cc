#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;


// 1 2 3 4 5 6 7
// 3 6
int n, k;
vector<int> v;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> k;
  vector<int> tmp;
  for (int i = 1; i < n + 1; i++) {
    tmp.push_back(i);
  }
  int idx = 0;

    while (true)
    {
      idx = (idx + k - 1) % tmp.size();
      v.push_back(tmp[idx]);
      tmp.erase(tmp.begin() + idx);
      if (v.size() == n)
        break;
    }
    cout << "<";  
    for (int i = 0; i < n; i++) {
      if(i==n-1) {
        cout << v[i];
      } else
      cout << v[i] << ", ";
    }
    cout << ">";
      return 0;
}
#include<bits/stdc++.h>
using namespace std;

int n, m;
string s;

map<string, int> mps;
string mpi[100002];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> m;
  
  for (int i = 0; i < n; i++) {
    cin >> s;
    mpi[i+1] = s;
    mps[s] = i + 1;
  }

  for (int j = 0; j < m; j++)
  {
    cin >> s;
    if (atoi(s.c_str()) == 0) {
      cout << mps[s] << "\n";
    }
    else cout << mpi[atoi(s.c_str())] << "\n";
  }
  return 0;
}
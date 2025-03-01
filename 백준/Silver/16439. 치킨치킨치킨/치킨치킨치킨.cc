#include <bits/stdc++.h>
using namespace std;

int n, m;
int chicken[31][31]; 

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  for (int i = 0; i < n; i++) { 
    for (int j = 0; j < m; j++) {
      cin >> chicken[i][j];
    }
  }

  int maxSat = 0;
  for (int i = 0; i < m; i++) {
    for (int j = i + 1; j < m; j++) {
      for (int k = j + 1; k < m; k++) {
        int totalSat = 0;

        for (int person = 0; person < n; person++) {
          totalSat += max({chicken[person][i], chicken[person][j], chicken[person][k]});
        }

        maxSat = max(maxSat, totalSat);
      }
    }
  }

  cout << maxSat << "\n";
  return 0;
}

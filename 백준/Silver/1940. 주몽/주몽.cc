#include<bits/stdc++.h>
using namespace std;
int n, m, arr[15001];
int cnt;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // combination 2 의 sum이 m 인 것 
  if(m>200000)
    cout << 0 << "\n";
  else {
    for (int i = 0; i < n; i++)
    {
      for (int j = i+1; j < n; j++)
      {
        if (arr[i]+arr[j] == m) {
          cnt++;
        }
      }
    }
  cout << cnt << "\n";
  }
}
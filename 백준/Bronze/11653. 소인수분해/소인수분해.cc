#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin >> n;
  if (n == 1) return 0;

  while (n % 2 == 0) {
    cout << 2 << "\n";
    n /= 2;
  }

  // 3부터 sqrt(n)까지 홀수만 나누기
  for (int i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      cout << i << "\n";
      n /= i;
    }
  }

  // 마지막으로 남은 소수 출력
  if (n > 1) {
    cout << n << "\n";
  }

  return 0;
}
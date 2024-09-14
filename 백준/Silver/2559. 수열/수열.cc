// n: 2~10만
// k: 2~10만 -1 (1과 N 사이라고 했으므로)
// 온도는 -100~100
// 연속된 온도의 합이 "최대"가 되는 값
// 이 문제의 최솟값은? -100 * (10만번) >> -1000만
// 최대값은 어디서부터?

// 구간합이므로 풋썸 이용

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k, tmp, psum[100001], ret = -10000004;
int main()
{
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> tmp;
    psum[i] = psum[i - 1] + tmp;
  }
  for (int i = k; i <= n; i++) {
    ret = max(ret, psum[i] - psum[i - k]);
  }
  cout << ret << "\n";
  return 0;
}
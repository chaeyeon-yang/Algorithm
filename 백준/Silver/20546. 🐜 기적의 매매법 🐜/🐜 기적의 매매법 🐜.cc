#include<bits/stdc++.h>
using namespace std;
int n, tmp, jun, sung, jun_cnt, sung_cnt, isup, isdo;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;

  jun = n;
  sung = n;
  vector<int> v(14);
  for (int i = 0; i < 14; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < 14; i++) {
    tmp = v[i-1];
    if (i > 0 && tmp < v[i]) {
      isup++;
    } else isup = 0;
    if (i > 0 && tmp > v[i]) {
      isdo++;
    } else isdo = 0;
    if (isup >= 3) {
      sung += sung_cnt * v[i];
      sung_cnt = 0;
    }
    if (isdo >= 3 && v[i] <= sung) {
      sung_cnt += sung / v[i];
      sung = sung % v[i];
      // cout << i+1<<" 일에 " << "매수 !! " << sung_cnt << " 주 " << "잔액은 " << sung << "\n";
    }
    if (v[i] <= jun) {
      jun_cnt += jun / v[i];
      jun = jun % v[i];
    }
  }

  jun = jun + (v[13] * jun_cnt);
  sung = sung + (v[13] * sung_cnt);
  
  if (jun > sung)
    cout << "BNP\n";
  if (jun < sung)
    cout << "TIMING\n";
  if (jun == sung)
    cout << "SAMESAME\n";
  return 0;
}
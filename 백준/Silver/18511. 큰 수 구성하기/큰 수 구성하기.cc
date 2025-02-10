#include <bits/stdc++.h>
using namespace std;

int n, k, maxNum = 0;
vector<int> v;

void dfs(int num) {
    if (num > n) return;
    maxNum = max(maxNum, num);

    for (int i = 0; i < k; i++) {  
        dfs(num * 10 + v[i]);  // 다음 자릿수를 추가하여 탐색
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    v.resize(k);
    
    for (int i = 0; i < k; i++) {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());  // 큰 숫자부터 탐색

    dfs(0);

    cout << maxNum << "\n";
    return 0;
}

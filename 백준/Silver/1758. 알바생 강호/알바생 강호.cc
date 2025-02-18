#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long res = 0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        int tip = max(0, a[i] - i);
        res += tip;
    }

    cout << res << "\n";
    return 0;
}

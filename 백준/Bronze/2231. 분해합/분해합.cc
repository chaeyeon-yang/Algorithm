#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        int ss = i, temp = i; 
        while (temp > 0) { 
            ss += temp % 10; 
            temp /= 10;
        }
        if (ss == n) {
            cout << i << "\n";
            return 0;
        }
    }
    cout << "0\n";
}

#include <bits/stdc++.h>
using namespace std;
int n, s;
int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%1d", &a);
        s += a;
    }

    printf("%d\n", s);
    return 0;
}

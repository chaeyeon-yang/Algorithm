#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while (t--) {
        int n, m; cin >> n >> m;

        queue<pair<int,int>> q;
        priority_queue<int> pq;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            q.push({x, i});
            pq.push(x);
        }

        int cnt = 0;

        while (!q.empty()) {
            auto cur = q.front(); 
            q.pop();

            if (cur.first == pq.top()) {
                pq.pop();
                cnt++;

                if (cur.second == m) {
                    cout << cnt << "\n";
                    break;
                }
            } 
            else {
                q.push(cur);
            }
        }
    }
}
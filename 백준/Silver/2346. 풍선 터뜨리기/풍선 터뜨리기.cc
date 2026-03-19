#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    deque<pair<int,int>> dq;

    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        dq.push_back({i, x});
    }

    while(!dq.empty()) {
        auto [idx, move] = dq.front();
        dq.pop_front();

        cout << idx << " ";

        if(dq.empty()) break;

        if(move > 0) {
            for(int i = 0; i < move - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for(int i = 0; i < -move; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}
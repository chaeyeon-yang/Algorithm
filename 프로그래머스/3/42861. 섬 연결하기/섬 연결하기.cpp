#include <vector>
#include <algorithm>

using namespace std;

vector<int> parent;

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

bool unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return false;   // 이미 같은 그룹
    parent[b] = a;
    return true;                // 새로 합쳐짐
}

int solution(int n, vector<vector<int>> costs) {
    parent.resize(n);
    for (int i = 0; i < n; i++) parent[i] = i;

    // 비용 기준 오름차순 정렬
    sort(costs.begin(), costs.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2] < b[2];
    });

    int answer = 0;
    int count = 0;
    for (auto& c : costs) {
        if (unite(c[0], c[1])) {
            answer += c[2];
            count++;
            if (count == n - 1) break;   // 섬 n개는 다리 n-1개면 모두 연결됨
        }
    }
    return answer;
}
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

map<string, int> combi_count;

void make_combinations(string order, string comb, int idx, int target_len) {
    if (comb.size() == target_len) {
        combi_count[comb]++;
        return;
    }

    for (int i = idx; i < order.size(); i++) {
        make_combinations(order, comb + order[i], i + 1, target_len);
    }
}

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;

    for (string& order : orders) {
        sort(order.begin(), order.end());
    }

    for (int len : course) {
        combi_count.clear();
        int max_count = 0;

        // 모든 주문에서 조합 만들기
        for (string& order : orders) {
            if (order.size() < len) continue;
            make_combinations(order, "", 0, len);
        }

        // 가장 많이 나온 조합 찾기 (최소 2회)
        for (auto& p : combi_count) {
            if (p.second >= 2) {
                max_count = max(max_count, p.second);
            }
        }

        for (auto& p : combi_count) {
            if (p.second == max_count && max_count >= 2) {
                answer.push_back(p.first);
            }
        }
    }

    sort(answer.begin(), answer.end());  // 전체 결과 정렬
    return answer;
}

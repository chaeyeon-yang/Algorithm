#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<int> solution(string s) {
    s = s.substr(2, s.size() - 4);  // "{{...}}" 제거
    vector<string> parts;
    int start = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '}' && i + 1 < s.size() && s[i + 1] == ',') {
            parts.push_back(s.substr(start, i - start));
            start = i + 3;
            i += 2;
        }
    }
    parts.push_back(s.substr(start));  // 마지막 원소 추가

    // 문자열 → 숫자 벡터
    vector<vector<int>> tuples;
    for (string part : parts) {
        vector<int> nums;
        stringstream ss(part);
        string token;
        while (getline(ss, token, ',')) {
            nums.push_back(stoi(token));
        }
        tuples.push_back(nums);
    }

    // 길이 순 정렬
    sort(tuples.begin(), tuples.end(), [](const vector<int>& a, const vector<int>& b) {
        return a.size() < b.size();
    });

    // 중복 없이 순서대로 추가
    vector<int> answer;
    unordered_set<int> seen;
    for (const auto& vec : tuples) {
        for (int num : vec) {
            if (seen.count(num) == 0) {
                answer.push_back(num);
                seen.insert(num);
            }
        }
    }

    return answer;
}

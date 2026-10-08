#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> solution(string s) {
    map<int, int> cnt;
    int num = 0;
    bool reading = false;

    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
            reading = true;
        } else if (reading) {  
            cnt[num]++;
            num = 0;
            reading = false;
        }
    }

    vector<pair<int, int>> v;
    for (auto& [n, c] : cnt) v.push_back({c, n});
    sort(v.rbegin(), v.rend());

    vector<int> answer;
    for (auto& [c, n] : v) answer.push_back(n);
    return answer;
}
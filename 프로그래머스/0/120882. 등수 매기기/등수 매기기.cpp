#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size());
    vector<pair<int, int>> tmp;

    for (int i = 0; i < score.size(); i++) {
        int avg = score[i][0] + score[i][1]; 
        tmp.push_back({avg, i});
    }

    sort(tmp.begin(), tmp.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.first > b.first;
    });

    int rank = 1;
    for (int i = 0; i < tmp.size(); i++) {
        if (i > 0 && tmp[i].first != tmp[i - 1].first) {
            rank = i + 1; 
        }
        answer[tmp[i].second] = rank;
    }

    return answer;
}

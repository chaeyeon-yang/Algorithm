#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int num1 = 0, num2 = 0, num3 = 0;
    vector<int> met1 = {1, 2, 3, 4, 5};
    vector<int> met2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> met3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for(int i = 0; i < answers.size(); i++) {
        if (answers[i] == met1[i % met1.size()]) num1++;
        if (answers[i] == met2[i % met2.size()]) num2++;
        if (answers[i] == met3[i % met3.size()]) num3++;
    }
    
    vector<pair<int, int>> scores = {
        {num1, 1},
        {num2, 2},
        {num3, 3}
    };
    
    // 점수 기준 내림차순 정렬
    sort(scores.rbegin(), scores.rend());
    
    int max_score = scores[0].first;
    
    // 가장 높은 점수를 받은 사람 모두 answer에 추가
    for (auto& p : scores) {
        if (p.first == max_score) {
            answer.push_back(p.second);
        }
    }
    
    sort(answer.begin(), answer.end()); 
    return answer;
}

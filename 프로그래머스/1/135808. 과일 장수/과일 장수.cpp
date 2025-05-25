#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.rbegin(), score.rend());
    
    for(int i = 0; i + m <= score.size(); i += m) {
        int min_score = score[i + m - 1];
        answer += min_score * m;
    }
    
    return answer;
}
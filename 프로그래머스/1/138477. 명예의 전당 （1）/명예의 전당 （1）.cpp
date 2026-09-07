#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    // 명예의 전당 k등
    vector<int> tmp;
    for(int i=0; i<score.size(); i++) {
        if (tmp.size()<k) {
            tmp.push_back(score[i]);
            sort(tmp.begin(), tmp.end());
        } else if (score[i] > tmp[0]) {
            tmp.erase(tmp.begin());     
            tmp.push_back(score[i]);
            sort(tmp.begin(), tmp.end());
        }
        answer.push_back(tmp[0]); 
    }
    return answer;
}
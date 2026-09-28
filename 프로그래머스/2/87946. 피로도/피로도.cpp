#include <string>
#include <vector>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    for(int i=0; i<dungeons.size(); i++) {
        if (k >= dungeons[i][0]) {
            vector<vector<int>> tmp;
            for(int j=0; j<dungeons.size(); j++) {
                if (i!=j) tmp.push_back(dungeons[j]);
            }
            int step = solution(k-dungeons[i][1], tmp)+1;
            answer = max(answer, step);
        }
    }
    return answer;
}
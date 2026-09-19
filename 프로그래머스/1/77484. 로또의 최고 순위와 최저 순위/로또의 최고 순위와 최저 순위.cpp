#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int matching = 0;
    int idk = 0;
    for(int num: lottos) {
        if (num == 0) {
            idk++;
            continue;
        }
        for(int win: win_nums) {
            if (num == win) {
                matching++;
            }
        }
    }
    int worst = matching >= 6 ? matching/6 : (matching==0? 6 : 6-matching+1);
    matching += idk;
    int best = matching >= 6 ? 1 : (matching==0? 6 : 6-matching+1);
    
    answer.push_back(best);
    answer.push_back(worst);
    return answer;
}
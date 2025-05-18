#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    vector<pair<int, int>> needs;
    for(int i=0; i<dungeons.size(); i++) {
        needs.push_back({dungeons[i][0], dungeons[i][1]});
    }
    sort(needs.begin(), needs.end());
    
    do {
        int tmp_ans = 0;
        int tmp_k = k;
        for(int i=0; i<needs.size(); i++) {
            int needs_exp = needs[i].first;
            int somo_exp = needs[i].second;
            if (tmp_k >= needs_exp) {
                tmp_k -= somo_exp;
                tmp_ans++;
            }
        }
        answer = max(answer, tmp_ans);
    } while(next_permutation(needs.begin(), needs.end()));
        
    
    return answer;
}
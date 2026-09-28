#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    // 최대한 많은 던전.. DP?
    sort(dungeons.begin(), dungeons.end());
    do {
        int pirodo = k;
        int cnt = 0;
        for(int i=0; i<dungeons.size(); i++) {
            if (pirodo >= dungeons[i][0]) {
                pirodo -= dungeons[i][1];
                cnt++;
            } else {
                break;
            }
        }
        answer = max(cnt, answer);
    } while (next_permutation(dungeons.begin(), dungeons.end()));
    
    return answer;
}
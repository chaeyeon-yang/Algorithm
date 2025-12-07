#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long dfs(int level, vector<int> dif, vector<int> tim) {
    long long hours = 0;
    for(int i=0; i<dif.size(); i++) {
        if (dif[i] <= level) {
            hours += tim[i];
        } else if (dif[i] > level) {
            if (i>0) {
                hours += (dif[i] - level) * (tim[i]+tim[i-1]) + tim[i];
            } else {
                hours += (dif[i] - level) * (tim[i]) + tim[i];
            }
        }
    }
    return hours;
}

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int answer = 0;
    int level = 1;
    int level_max = *max_element(diffs.begin(), diffs.end());
    answer = level_max;  // 최악의 경우
    
    while (level <= level_max) {
        int mid = (level + level_max) / 2; // 이진탐색
        long long now = dfs(mid, diffs, times);

        if (now <= limit) {
            answer = mid;     // 가능한 level
            level_max = mid - 1;  // 더 낮은 level이 되는지 탐색
        } else {
            level = mid + 1;   // 시간 초과 → level 올리기
        }
    }
    
    return answer;
}
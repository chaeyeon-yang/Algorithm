#include <vector>
#include <iostream>
using namespace std;

int answer = 0;

void dfs(const vector<int>& numbers, int target, int idx, int sum) {
    if (idx == numbers.size()) {                 // 숫자를 다 씀
        if (sum == target) answer++;
        return;
    }
    // 이번 숫자에 - 를 붙인 경우
    dfs(numbers, target, idx + 1, sum - numbers[idx]);

    // 이번 숫자에 + 를 붙인 경우
    dfs(numbers, target, idx + 1, sum + numbers[idx]);
}

int solution(vector<int> numbers, int target) {
    dfs(numbers, target, 0, 0);
    return answer;
}
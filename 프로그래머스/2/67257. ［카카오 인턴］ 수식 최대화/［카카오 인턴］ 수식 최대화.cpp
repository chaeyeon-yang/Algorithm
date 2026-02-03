#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long calc(long long a, long long b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    return a * b;
}

long long solution(string expression) {
    long long answer = 0;

    // 수식 파싱
    vector<long long> nums;
    vector<char> ops;

    string now = "";
    for (char c : expression) {
        if (isdigit(c)) {
            now += c;
        } else {
            nums.push_back(stoll(now));
            now = "";
            ops.push_back(c);
        }
    }
    nums.push_back(stoll(now));

    // 연산자 우선순위 순열
    vector<char> priority = {'+', '-', '*'};
    sort(priority.begin(), priority.end());

    // 모든 우선순위 경우 계산
    do {
        vector<long long> tmpNums = nums;
        vector<char> tmpOps = ops;

        for (char curOp : priority) {
            for (int i = 0; i < tmpOps.size();) {
                if (tmpOps[i] == curOp) {
                    long long res = calc(tmpNums[i], tmpNums[i + 1], curOp);

                    tmpNums[i] = res;
                    tmpNums.erase(tmpNums.begin() + i + 1);
                    tmpOps.erase(tmpOps.begin() + i);
                } else {
                    i++;
                }
            }
        }

        answer = max(answer, llabs(tmpNums[0]));

    } while (next_permutation(priority.begin(), priority.end()));

    return answer;
}

#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    int n = sequence.size();
    int left = 0, total = 0;
    int len = n + 1;
    pair<int,int> res = {0, n - 1};

    for (int right = 0; right < n; right++) {
        total += sequence[right];              // 1. 항상 더하기

        while (total > k) {
            total -= sequence[left];           // 2. 빼고 나서
            left++;                            //    이동
        }

        if (total == k && right - left + 1 < len) {   // 3. 기록만
            len = right - left + 1;
            res = {left, right};
        }
    }
    return {res.first, res.second};
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    int n = sequence.size();
    int sum = 0;
    int left = 0;
    vector<int> answer = {0, n-1};

    for (int right = 0; right < n; right++) {
        sum += sequence[right];

        while (sum > k) {
            sum -= sequence[left++];
        }

        if (sum == k) {
            if (right - left < answer[1] - answer[0]) {
                answer = {left, right};
            }
        }
    }
    return answer;
}

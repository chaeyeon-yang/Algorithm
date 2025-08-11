#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    int start = 0, end = 0;
    int sum = 0;
    vector<int> answer = {0, (int)sequence.size()-1};
    int minLength = sequence.size();

    while (end < sequence.size()) {
        sum += sequence[end];

        while (sum > k && start <= end) {
            sum -= sequence[start];
            start++;
        }

        if (sum == k) {
            if (end - start < minLength) {
                minLength = end - start;
                answer = {start, end};
            }
        }
        end++;
    }

    return answer;
}

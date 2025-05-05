#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(), array.end());

    int answer = array[0];
    int min_diff = abs(n - array[0]);

    for (int i = 1; i < array.size(); i++) {
        int diff = abs(n - array[i]);
        if (diff < min_diff) {
            min_diff = diff;
            answer = array[i];
        }
        else if (diff == min_diff && array[i] < answer) {
            answer = array[i];
        }
    }

    return answer;
}

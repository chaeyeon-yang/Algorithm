#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    int j=0;
    for(int i=0; i<=9; i++) {
        if (numbers[j] != i) {
            answer += i;
        } else {
            j++;
        }
    }
    return answer;
}
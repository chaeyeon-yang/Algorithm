#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int now = 1;
    if (num_list.size() > 10) {
        for(int i: num_list) {
            answer += i;
        }
    } else {
        for(int i: num_list) {
            now *= i;
        }
        answer = now;
    }
    return answer;
}
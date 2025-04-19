#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string tmp = to_string(order);
    for(char c: tmp) {
        if (c-'0' == 3 || c-'0' == 6 || c-'0' == 9) answer++;
    }
    return answer;
}
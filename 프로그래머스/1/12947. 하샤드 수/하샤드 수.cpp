#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string now = to_string(x);
    int k = 0;
    for(char c: now) {
        k += c-'0';
    }
    if (x%k != 0) answer = false;
    return answer;
}
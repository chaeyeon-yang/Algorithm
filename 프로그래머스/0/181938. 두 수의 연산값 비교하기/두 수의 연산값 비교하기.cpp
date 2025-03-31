#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string now = to_string(a)+to_string(b);
    if(stoi(now) >= 2*a*b) answer = stoi(now);
    else if (stoi(now) < 2*a*b) answer = 2*a*b;
    return answer;
}
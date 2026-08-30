#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 1000000;
    for(int i=1; i<n; i++) {
        if (n%i == 1) {
            answer = min(answer, i);
        }
    }
    return answer;
}
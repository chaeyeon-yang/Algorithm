#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 12000*n+2000*k;
    if(n/10 >= 1) {
        answer -= n/10*2000;
    }
    return answer;
}
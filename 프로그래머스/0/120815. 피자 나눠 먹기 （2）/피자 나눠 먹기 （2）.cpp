#include <string>
#include <vector>

using namespace std;
// 10 

int solution(int n) {
    int answer = 0;
    int m=n;
    while(m!=0) {
        if (m*6%n==0) {
            answer = m*6/6;
        }
        m--;
    }
    return answer;
}
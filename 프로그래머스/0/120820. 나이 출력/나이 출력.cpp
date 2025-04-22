#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int answer = 0;
    if(age<2000) {
        answer = answer + 2000-age;
        answer += 23;
    } else if (age>=2000) {
        answer += 23;
    }
    
    return answer;
}
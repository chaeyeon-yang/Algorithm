#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    if (n>7 && n%7==0) answer = n/7;
    else if (n>7 && n%7!=0) answer = n/7+1;
    return answer;
}
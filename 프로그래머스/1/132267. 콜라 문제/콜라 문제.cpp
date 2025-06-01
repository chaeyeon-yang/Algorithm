#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int rest = n;
    while(rest/a!=0) {
        int tmp = rest/a;
        rest = rest%a + b*tmp;
        
        answer += b*tmp;
    }
    return answer;
}
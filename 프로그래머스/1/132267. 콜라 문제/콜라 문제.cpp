#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    // 빈 병 a -> 콜라 b
    // 빈 병 n -> ?
    
    // 빈 병 5개 주면 콜라 3개
    while (n >= a) {
        int got = (n/a)*b;    
        answer += got;           
        n = (n % a) + got; // 남은 빈병 + 새로 받은 콜라
    }
    
    return answer;
}
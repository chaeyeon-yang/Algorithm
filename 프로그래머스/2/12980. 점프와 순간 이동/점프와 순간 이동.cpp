#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    while (n > 0) {
        if (n % 2 == 1) {   // 홀수면 점프 1칸
            n -= 1;
            ans++;
        } else {            // 짝수면 순간이동 (공짜)
            n /= 2;
        }
    }
    return ans;
}
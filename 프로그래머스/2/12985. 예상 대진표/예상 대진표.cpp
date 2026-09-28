#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    a--; b--;
    if (a/2 == b/2) return answer;
    else {
        while(a/2!=b/2) {
            a = a/2;
            b = b/2;
            answer++;
        }
    }

    return answer;
}
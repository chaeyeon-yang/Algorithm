#include <string>
#include <vector>
#include <iostream>
#include <bit>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=n+1; i<=10000000; i++) {
        if (__popcount(n) == __popcount(i)) {
            answer = i;
            break;
        }
    }
    return answer;
}
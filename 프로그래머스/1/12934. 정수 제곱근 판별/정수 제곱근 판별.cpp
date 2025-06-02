#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    double tmp = sqrt(n);
    if ((int)tmp == tmp) {
        answer = (sqrt(n)+1)*(sqrt(n)+1);
    }
    return answer;
}
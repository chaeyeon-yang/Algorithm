#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int a, int b) {
    int answer = 1;
    // 1. 기약분수로 나타내기
    // 2. 분모 소인수 판별
    
    int mi = min(a, b);
    int i = 2;
    while (i <= mi) {
        if (a%i == 0 && b%i == 0) {
            a = a/i;
            b = b/i;
        } else {
            i++;
        }
    }
    cout << "b : " << b;
    
    while(true) {
        if (b==1) break;
        if (b%2!=0 && b%5!=0) {
            answer = 2;
            break;
        }
        if (b%2 == 0) {
            b = b/2;
        }
        if (b%5 == 0) {
            b = b/5;
        } 
    }
    
    return answer;
}
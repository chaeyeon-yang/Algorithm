#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 최소공약수 계산
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int bunmo = denom1*denom2;
    int bunza = 0;
    bunza = bunmo/denom1*numer1 + bunmo/denom2*numer2;
    int tmp = gcd(bunza, bunmo);
    
    bunmo = bunmo/tmp;
    bunza = bunza/tmp;
    
    answer.push_back(bunza);
    answer.push_back(bunmo);
    return answer;
}
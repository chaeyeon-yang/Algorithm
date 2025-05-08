#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    int cnt = 0;
    while(true) {
        if (A == B) {
            return cnt;
        };
        int b = A[A.size()-1];
        A.pop_back();
        A.insert(A.begin(), b);
        cnt++;
        if (cnt == A.size() && A!=B) return -1;
    }
    return answer;
}
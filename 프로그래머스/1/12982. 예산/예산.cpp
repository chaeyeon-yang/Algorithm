#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int sum = 0;
    // 부서 처리 개수 우선, atom 단위
    sort(d.begin(), d.end());
    for(int i: d) {
        if (sum + i <= budget) {
            answer++;
        }
        sum+=i;
    }
    
    return answer;
}
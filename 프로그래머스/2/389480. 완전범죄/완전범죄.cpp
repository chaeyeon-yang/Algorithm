#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> info, int n, int m) {
    int answer = 0;
    
    vector<vector<int>> knapsack = vector<vector<int>>(info.size() + 1, vector<int>(m));
    int sum_a = 0;

    for(int i = 0; i < info.size(); i++) {
        sum_a += info[i][0]; // a에 모든 흔적을 합한 값을 할당
        for(int j = 0; j < m; j++) { // 0~m-1 동안
            knapsack[i + 1][j] = knapsack[i][j]; // b가 절약 안맡을 때
            if(j >= info[i][1]) // a의 흔적을 b가 절약할 수 있는 경우
                knapsack[i + 1][j] = max(knapsack[i + 1][j], // b가 절약 안맡을 때
                                         knapsack[i][j - info[i][1]] + info[i][0]); //  b가 절약 맡을 때
        }
    }

    answer = sum_a - knapsack[info.size()][m - 1]; // a의 흔적 총 합 - b가 절약해준 흔적
    if(answer >= n)
        answer = -1; // a도 목표를 달성하지 못하는 경우 -1

    return answer;
}
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> clothes(n, 1);
    for (int x : lost) clothes[x-1]--;
    for (int x : reserve) clothes[x-1]++;

    for (int i = 0; i < n; i++) {
        if (clothes[i] != 0) continue;
        if (i > 0 && clothes[i-1] == 2) {          // 왼쪽 먼저
            clothes[i-1]--; clothes[i]++;
        } else if (i < n-1 && clothes[i+1] == 2) { // 그다음 오른쪽
            clothes[i+1]--; clothes[i]++;
        }
    }

    int answer = 0;
    for (int c : clothes) if (c > 0) answer++;
    return answer;
}
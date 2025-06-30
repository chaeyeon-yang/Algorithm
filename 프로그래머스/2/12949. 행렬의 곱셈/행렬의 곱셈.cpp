#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int n = arr1.size();            // A의 행
    int m = arr1[0].size();         // A의 열 (== B의 행)
    int p = arr2[0].size();         // B의 열

    vector<vector<int>> answer(n, vector<int>(p, 0));

    for (int i = 0; i < n; i++) {          // A의 행
        for (int j = 0; j < p; j++) {      // B의 열
            for (int k = 0; k < m; k++) {  // A의 열 = B의 행
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    return answer;
}

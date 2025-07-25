#include <vector>

using namespace std;

int answer = 0;

void backtrack(int row, int n, vector<bool>& cols, vector<bool>& diag1, vector<bool>& diag2) {
    if (row == n) {
        answer++;
        return;
    }

    for (int col = 0; col < n; col++) {
        if (cols[col] || diag1[row + col] || diag2[row - col + n]) continue;

        cols[col] = diag1[row + col] = diag2[row - col + n] = true;

        backtrack(row + 1, n, cols, diag1, diag2);

        cols[col] = diag1[row + col] = diag2[row - col + n] = false;
    }
}

int solution(int n) {
    answer = 0;
    vector<bool> cols(n, false);         
    vector<bool> diag1(2 * n, false);  
    vector<bool> diag2(2 * n, false); 

    backtrack(0, n, cols, diag1, diag2);
    return answer;
}

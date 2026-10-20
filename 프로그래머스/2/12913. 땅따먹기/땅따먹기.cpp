#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> memo;

int dfs(vector<vector<int>>& land, int row, int prev) {
    if (row == land.size()) return 0;
    if (prev != -1 && memo[row][prev] != -1) return memo[row][prev];

    int best = 0;
    for (int j = 0; j < 4; j++) {
        if (j == prev) continue;
        best = max(best, land[row][j] + dfs(land, row + 1, j));
    }
    if (prev != -1) memo[row][prev] = best;
    return best;
}

int solution(vector<vector<int>> land) {
    memo.assign(land.size(), vector<int>(4, -1));
    return dfs(land, 0, -1);
}
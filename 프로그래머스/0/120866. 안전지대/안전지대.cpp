#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int sero = board[0].size();
    int garo = board.size();
    int b[sero][garo];
    int visited[sero][garo];
    
    pair<int, int> target;
    
    for(int i=0; i<garo; i++) {
        for(int j=0; j<sero; j++) {
            if (board[i][j] == 1) {
                target = {i, j};
                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        int nx = i + dx;
                        int ny = j + dy;
                        if (nx >= 0 && nx < garo && ny >= 0 && ny < sero) {
                            b[nx][ny] = 1;
                        }
                    }
                }
            }
        }
    }
    
    for(int i=0; i<garo; i++) {
        for(int j=0; j<sero; j++) {
            if (b[i][j] != 1) answer++;
        }
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    string b[8][8];
    const int dy[4] = {-1,0,1,0};
    const int dx[4] = {0,1,0,-1};
    
    for(int i=0; i<board.size(); i++) {
        for(int j=0; j<board[i].size(); j++) {
            b[i][j] = board[i][j];
        }
    }
    string color = b[h][w];
    
    for(int i=0; i<4; i++) {
        int ny = h+dy[i];
        int nx = w+dx[i];
        if (ny<0 || ny > 7 || nx<0 || nx>7) continue;
        if (b[ny][nx] == color) answer++;
    }
    
    return answer;
}
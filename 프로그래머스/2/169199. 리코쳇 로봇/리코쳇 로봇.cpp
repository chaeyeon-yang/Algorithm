#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

int solution(vector<string> board) {
    int n = board.size();
    int m = board[0].size();
    vector<vector<int>> visited(n, vector<int>(m, 0));

    int sy, sx, gy, gx;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(board[i][j] == 'R') { sy = i; sx = j; }
            if(board[i][j] == 'G') { gy = i; gx = j; }
        }
    }

    queue<pair<int,int>> q;
    queue<int> dist; // 이동 횟수 저장
    q.push({sy, sx});
    dist.push(0);
    visited[sy][sx] = 1;

    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        int d = dist.front();
        q.pop();
        dist.pop();

        if(y == gy && x == gx) return d;

        for(int dir=0; dir<4; dir++) {
            int ny = y, nx = x;
            // 한 방향으로 끝까지 이동
            while(true) {
                int ty = ny + dy[dir];
                int tx = nx + dx[dir];
                if(ty < 0 || ty >= n || tx < 0 || tx >= m) break;
                if(board[ty][tx] == 'D') break;
                ny = ty;
                nx = tx;
            }
            if(!visited[ny][nx]) {
                visited[ny][nx] = 1;
                q.push({ny, nx});
                dist.push(d + 1);
            }
        }
    }

    return -1; 
}

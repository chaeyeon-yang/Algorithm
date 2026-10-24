#include <vector>
#include <queue>
#include <iostream>

using namespace std;

const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

void bfs(int& n, int& m, int y, int x, vector<vector<int>>& maps, 
        vector<vector<int>>& visited) {
    
    queue<pair<int, int>> q;
    q.push({y, x});
    visited[y][x] = 1;
    while(!q.empty()) {
        auto [i, j] = q.front();
        q.pop();
        for(int a=0; a<4; a++) {
            int ny = i + dy[a];
            int nx = j + dx[a];
            if (ny<0 || nx<0 || ny>=n || nx>=m || visited[ny][nx]
               || !maps[ny][nx]) continue;
            
            visited[ny][nx] = visited[i][j]+1;
            q.push(make_pair(ny, nx));
        }
    }
}

int solution(vector<vector<int> > maps)
{
    // 0: 벽, 1:벽x
    int answer = 0;
    int n = maps.size();
    int m = maps[0].size();
    vector<vector<int>> visited(n, vector<int>(m,0));
    
    bfs(n, m, 0, 0, maps, visited);
    
    answer = visited[n-1][m-1] ? visited[n-1][m-1] : -1;
    
    return answer;
}
#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

int bfs(pair<int,int> start, pair<int,int> end,
        vector<string>& maps) {
    int n = maps.size();
    int m = maps[0].size();
    queue<pair<int, int>> q;
    vector<vector<int>> visited(n, vector<int>(m, -1));
    q.push({start.first, start.second});
    visited[start.first][start.second] = 0;
    while(!q.empty()) {
        auto [y, x] = q.front();
        q.pop();
        if (y == end.first && x == end.second) {
            return visited[y][x];
        }
        for(int i=0; i<4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny<0 || nx<0 || ny>=n || nx >=m) continue;
            if (maps[ny][nx] == 'X') continue;
            if (visited[ny][nx]!=-1) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push(make_pair(ny, nx));
        }
    }
    return -1;
}

int solution(vector<string> maps) {
    int answer = 0;
    pair<int, int> st;
    pair<int, int> ex;
    pair<int, int> le;
    
    int n = maps.size();
    int m = maps[0].size();
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (maps[i][j] == 'S') {
                st = {i, j};
            } 
            if (maps[i][j] == 'E') {
                ex = {i, j};
            }
            if (maps[i][j] == 'L') {
                le = {i, j};
            }
        }
    }
    
    // st 부터 le까지 bfs로 cnt 더하고
    // le 부터 ex bfs로 cnt 더하기
    
    int st_le = bfs(st, le, maps);
    int le_ex = bfs(le, ex, maps);
    
    if (st_le == -1 || le_ex == -1) return -1;
    return st_le+le_ex;
    
    
    return answer;
}
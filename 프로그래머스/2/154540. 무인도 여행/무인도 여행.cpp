#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

int dfs(const vector<string>& maps, 
        vector<vector<int>>& visited,
       int y, int x, int& cnt) {
    int n = maps.size();
    int m = maps[0].size();
    
    cnt += maps[y][x]-'0';
    visited[y][x] = 1;
    // cout << maps[y][x] << " ";
    
    for(int i=0; i<4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny<0 || nx<0 || ny>=n || nx>=m) continue;
        if (visited[ny][nx] != -1 || maps[ny][nx] == 'X') continue;
        dfs(maps, visited, ny, nx, cnt);
    }
    return cnt;
}

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    int n = maps.size();
    int m = maps[0].size();
    
    vector<vector<int>> visited(n, vector<int>(m, -1));
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (visited[i][j] == -1 && maps[i][j] !='X') {
                int cnt = 0;
                answer.push_back(dfs(maps, visited, i, j, cnt));
            }
        }
    }
    if (answer.size()) {
        sort(answer.begin(), answer.end());
    } else {
        answer.push_back(-1);
    }
    
    
    return answer;
}
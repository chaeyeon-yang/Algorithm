#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const int dy[4] = {0,-1,0,1};
const int dx[4] = {-1,0,1,0};

int dfs(int y, int x, vector<vector<int>>& m, vector<vector<bool>>& visited) {
    visited[y][x] = true;
    int sum = m[y][x];
    
    for(int a=0; a<4; a++) {
        int ny = y + dy[a];
        int nx = x + dx[a];

        if (ny<0 || ny>=m.size() || nx<0 || nx>=m[0].size() || visited[ny][nx]) 
            continue;
        if (m[ny][nx] == 0) continue;
        sum += dfs(ny, nx, m, visited);
    }
    return sum;
}


vector<int> solution(vector<string> maps) {
    vector<int> answer;

    int ysize = maps.size();
    int xsize = maps[0].size();

    vector<vector<int>> m(ysize, vector<int>(xsize));
    vector<vector<bool>> visited(ysize, vector<bool>(xsize));
            
    for(int i=0; i<ysize; i++) {
        for(int j=0; j<xsize; j++) {
            if(maps[i][j]=='X') {
                m[i][j] = 0;
            } else {
                m[i][j] = maps[i][j]-'0';
            }
        }
    }
    
    for(int i=0; i<ysize; i++) {
        for(int j=0; j<xsize; j++) {
            if (!visited[i][j] && m[i][j]!=0) {
                int cnt = dfs(i, j, m, visited);
                answer.push_back(cnt);
            }
        }
    }
    
    if (answer.size()==0) {
        answer.push_back(-1);
    } else {
        sort(answer.begin(), answer.end());
    }
    
    return answer;
}
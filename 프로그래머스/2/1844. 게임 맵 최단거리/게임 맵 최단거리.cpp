#include <vector>
#include <queue>
using namespace std;

const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    deque<pair<int, int>> q;
    int n = maps.size();
    int m = maps[0].size();
    
    vector<vector<int>> visited(n, vector<int>(m, 0));
    
    q.push_back(make_pair(0,0));
    visited[0][0] = 1;
    
    while(!q.empty()) {
        auto [y, x] = q.front();
        q.pop_front();
        for(int a=0; a<4; a++) {
            int ny = y + dy[a];
            int nx = x + dx[a];
            if(ny<0 || ny>=n || nx<0 || nx>=m || visited[ny][nx] || !maps[ny][nx]) continue;
            visited[ny][nx] = visited[y][x]+1;
            q.push_back(make_pair(ny, nx));
        }
    }
    
    return visited[n - 1][m - 1] ? visited[n - 1][m - 1] : -1;
    
}
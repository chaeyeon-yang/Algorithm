#include <string>
#include <vector>
#include <set>

using namespace std;

const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

int n, m;

void dfs(const vector<vector<int>>& land, vector<vector<int>>& comp, 
         int y, int x, int id, int& cnt)
{
    comp[y][x] = id;  
    cnt++;           

    for(int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny<0 || nx<0 || ny>=n || nx>=m) continue;
        if(land[ny][nx] == 0) continue;
        if(comp[ny][nx] != -1) continue;

        dfs(land, comp, ny, nx, id, cnt);
    }
}

int solution(vector<vector<int>> land) {
    n = land.size();
    m = land[0].size();

    vector<vector<int>> comp(n, vector<int>(m, -1));
    vector<int> compSize;

    int id = 0;

    // 전체 land에 대해 딱 한 번만 DFS 수행
    for(int y=0; y<n; y++){
        for(int x=0; x<m; x++){
            if(land[y][x] == 1 && comp[y][x] == -1){
                int cnt = 0;  
                dfs(land, comp, y, x, id, cnt);
                compSize.push_back(cnt);
                id++;  // 다음 덩어리는 id가 하나 증가
            }
        }
    }

    int answer = 0;

    for(int col=0; col<m; col++){
        set<int> seen;     // 중복 덩어리 방지
        int sum = 0;

        for(int row=0; row<n; row++){
            int cid = comp[row][col];

            if(cid != -1 && seen.find(cid) == seen.end()){
                seen.insert(cid);     // 이미 더한 덩어리는 다시 더하지 않음
                sum += compSize[cid]; // 덩어리 크기를 더함
            }
        }

        answer = max(answer, sum);
    }

    return answer;
}

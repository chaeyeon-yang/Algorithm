#include<bits/stdc++.h> 
using namespace std;  
#define y1 aaaa 
int a[104][104], m, n, k, x1, x2, y1, y2, visited[104][104];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
vector<int> res; 
int dfs(int y, int x){
    visited[y][x] = 1; 
    int res = 1; 
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i]; 
        int nx = x + dx[i]; 
        if(ny < 0 || ny >= m || nx < 0 || nx >= n || visited[ny][nx] == 1) continue; 
		if(a[ny][nx] == 1) continue;
        res += dfs(ny, nx);
    } 
    return res; 
}
int main() { 
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> m >> n >> k; 
    for(int i = 0; i < k; i++){
        cin >> x1 >> y1 >> x2 >> y2;  
        for(int x = x1; x < x2; x++){
            for(int y = y1; y < y2; y++){
                a[y][x] = 1; 
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != 1 && visited[i][j] == 0) { 
                res.push_back(dfs(i, j));
            }
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << "\n";
    for(int a : res) cout << a << " "; 
    return 0; 
}
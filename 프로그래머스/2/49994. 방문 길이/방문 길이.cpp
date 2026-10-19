#include <string>
#include <iostream>
#include <set>
#include <tuple>
#include <algorithm>

using namespace std;

int solution(string dirs) {
    int answer = 0;
    int x = 0;
    int y = 0;
    
    set<tuple<int, int, int, int>> visited;
    
    for(char c: dirs) {
        int nx = x;
        int ny = y;
        if (c == 'U') ny++;
        if (c == 'D') ny--;
        if (c == 'L') nx--;
        if (c == 'R') nx++;
        if (nx<-5 || nx>5 || ny<-5 || ny>5) continue;
        
        auto path = minmax(
            make_pair(x, y),
            make_pair(nx, ny)
        );

        visited.insert({
            path.first.first, path.first.second,
            path.second.first, path.second.second
        });
        y = ny;
        x = nx;
    }
    return visited.size();
}
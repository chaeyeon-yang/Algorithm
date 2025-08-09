#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<string, int> m;
int fatigue[3][3] = {{1,1,1}, {5,1,1}, {25,5,1}};

void dfs(vector<int> &picks, vector<string> &minerals, int psum, int loc, int &answer) {
    
    
    
    if (loc == minerals.size() || picks[0]==0 && picks[1]==0 && picks[2]==0) {
        answer = min(answer, psum);
        return;
    }

    // 모든 곡괭이를 사용하는 경우의 수 
    for(int i=0; i<3; i++) {
        if (picks[i]!=0) {
            picks[i]--;
            int tmpidx = loc;
            int tmpsum=psum;
            for(; tmpidx<loc+5 && tmpidx<minerals.size(); tmpidx++) {
              tmpsum += fatigue[i][m[minerals[tmpidx]]];
            }
            dfs(picks, minerals, tmpsum, tmpidx, answer);
            picks[i]++;
        }
    }
}

int solution(vector<int> picks, vector<string> minerals) {
    int answer = 50*25;
    m.insert({"diamond", 0});
    m.insert({"iron", 1});
    m.insert({"stone", 2});

    dfs(picks, minerals, 0, 0, answer);
    
    return answer;
}
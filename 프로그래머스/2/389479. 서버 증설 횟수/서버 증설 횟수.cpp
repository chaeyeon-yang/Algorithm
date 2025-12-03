#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> players, int m, int k) {
    int answer = 0;
    // 게임을 이용하는 사람 m명 늘어날때마다 서버 +1
    // nxm <= x < (n+1)xm --> 최소 n대의 증설된 서버가 운영중
    // 한번 증설한 서버는 k시간 동안 운영
    // 모든 게임 이용자가 게임하기위해 서버 최소 몇 번 증설
    
    vector<int> tmp(24); // 서버 운영상황
    for(int i=0; i<players.size(); i++) {
        if(players[i] >= m) {
            int need = players[i]/m - tmp[i];
                      
            if (need > 0) {
                answer += need;
                for(int j=i; j<i+k and j<24; j++) {
                    tmp[j] += need;
                }
            }
        }
    }
    
    return answer;
}
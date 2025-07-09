#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;
// 같은 시간대에 m명 늘어날때마다 서버 1대 추가 증설, 그 미만은 증설하지 않음
// n x m명 이상 (n + 1) x m 미만 최소 n 대의 서버가 운영중이어야 함
// 한 번 증설한 서버는 k시간 동안 운영하고 반납
// k=5, 10~15시만 운영

// 서버를 최소 몇번 증설? 
map<int, int> mp;

int solution(vector<int> players, int m, int k) {
    int answer = 0;
    int arr[24];
    int new_ser = 0;
    for(int i=0; i<players.size(); i++) {
        if (players[i]/m > 0) {
            int tmp = players[i]/m-mp[i];
            if (tmp <= 0) continue;
            for(int j=i; j<i+k; j++) {
                mp[j]+=tmp;
            }

            answer+=tmp;
        }
    }
    
    return answer;
}
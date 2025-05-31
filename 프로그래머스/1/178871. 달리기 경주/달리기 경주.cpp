#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    map<string, int> idxMap;
    
    // 초기 인덱스 맵 구성
    for (int i = 0; i < players.size(); i++) {
        idxMap[players[i]] = i;
    }
    
    for (const string& name : callings) {
        int i = idxMap[name];
        if (i == 0) continue; // 맨 앞이면 추월 못함
        
        // 앞 선수와 자리 바꾸기
        string before = players[i - 1];
        swap(players[i], players[i - 1]);
        
        // 인덱스 갱신
        idxMap[name] = i - 1;
        idxMap[before] = i;
    }
    
    return players;
}
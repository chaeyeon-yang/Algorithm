#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    // 키 최대 100개 
    // 키를 최소 몇번 눌러야 그 문자열 작성
    // 1번키 ABACD 2번키는 BCEFD
    // target: ABCD
    // 1번키 1
    // 2번키 1
    // 2번키 2
    // 1번키 5
    
    for(int i=0; i<targets.size(); i++) {
        string now_t = targets[i];
        int ans = 0;
        for(int j=0; j<now_t.size(); j++) {
            size_t tmp = 104;
            for(int k=0; k<keymap.size(); k++) {
                size_t fin = keymap[k].find(now_t[j]);
                if (fin != string::npos) {
                    tmp = min(tmp, fin+1);
                    continue;
                }
            }
            if (tmp == 104) {
                ans = -1;
                break;
            }
            else {
                ans += tmp;
            }
        }
        answer.push_back(ans);
    }
    
    return answer;
}
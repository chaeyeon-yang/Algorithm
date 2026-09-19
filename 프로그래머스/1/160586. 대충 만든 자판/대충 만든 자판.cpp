#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    // 최소한 눌러야되는 키의 수 
    for(string target: targets) {
        int total_press = 0;
        // cout << "이번 타켓은 " << target << "\n";
        for(int i=0; i<target.size(); i++) {
            char c = target[i];
            int min_press = 101;
            for(string key: keymap) {
                for(int a=0; a<key.size(); a++) {
                    if (key[a] == c) {
                        min_press = min(min_press, a+1);
                        break;
                    }
                }
            }
            total_press += min_press;
            if (min_press == 101) {
                total_press = -1;
                break;
            }
        }
        answer.push_back(total_press);
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    for(string s: dic) {
        int cnt = 0;
        for(string k: spell) {
            if (s.find(k) == string::npos) continue;
            cnt++;
        }
        if (cnt == spell.size()) {
            return 1;
        }
    }
    return answer;
}
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> tmp;
    for(int i=0; i<s.size(); i++) {
        if (!tmp.contains(s[i])) {
            answer.push_back(-1);
            tmp[s[i]] = i;
        } else {
            int char_idx = tmp[s[i]];
            answer.push_back(i-char_idx);
            tmp[s[i]] = i;
        }
    }
    
    return answer;
}
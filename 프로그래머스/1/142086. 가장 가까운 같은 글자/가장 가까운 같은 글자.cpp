#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> mp;
    
    for(int i=0; i<s.size(); i++) {
        if (mp[s[i]] == 0) {
            mp[s[i]] = i+1;
            answer.push_back(-1);
        } else {
            answer.push_back(i+1-mp[s[i]]);
            mp[s[i]] = i+1;
        }
    
    }
    return answer;
}
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map<string, int> dict;

    for (int i = 0; i < 26; i++) {
        dict[string(1, 'A' + i)] = i + 1;
    }
    int nextIdx = 27;

    int n = msg.size();
    int i = 0;
    while (i < n) {
        // 2. 사전에 있는 가장 긴 문자열 찾기
        int len = 1;
        while (i + len <= n && dict.count(msg.substr(i, len))) {
            len++;
        }

        string w = msg.substr(i, len - 1);
        answer.push_back(dict[w]);          

      
        if (i + len <= n) {
            dict[msg.substr(i, len)] = nextIdx++;
        }

        i += len - 1;                       
    }

    return answer;
}
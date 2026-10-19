#include <string>
using namespace std;

const string vowels = "AEIOU";
int cnt, answer;

void dfs(const string& cur, const string& target) {
    if (!cur.empty()) {          // 빈 문자열은 단어가 아니니까 세지 않음
        cnt++;
        if (cur == target) { answer = cnt; return; }
    }
    if (cur.size() == 5) return; // 길이 5면 더 못 붙임
    for (char c : vowels) {
        dfs(cur + c, target);
        if (answer) return;      // 찾았으면 조기 종료
    }
}

int solution(string word) {
    cnt = 0; answer = 0;
    dfs("", word);
    return answer;
}
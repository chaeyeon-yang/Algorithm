#include <string>
using namespace std;

const string vowels = "AEIOU";
int cnt = 0;      // 지금까지 만든 단어 수
int answer = 0;

void dfs(const string& cur, const string& word) {
    if (cur.size() == 5) return;              // 끝나는 조건: 더 붙일 수 없음

    for (char c : vowels) {                   // 선택지 5개
        string next = cur + c;                // 이번 자리에 글자 하나 붙이기
        cnt++;                                // 사전에 단어 하나 추가
        if (next == word) answer = cnt;       // 찾던 단어면 번호 기록
        dfs(next, word);                      // 다음 자리로
    }
}

int solution(string word) {
    dfs("", word);
    return answer;
}
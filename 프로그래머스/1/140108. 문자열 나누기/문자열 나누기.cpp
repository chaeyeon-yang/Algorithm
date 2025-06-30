#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(string s) {
    int answer = 0;
    map<char, int> mp;
    int tmp = -1;
    char c = s[0];
    for(int i=0; i<s.size(); i++) {
        // cout << i << "번째 인덱스 실행 ~~ \n";
        if (s[i] == c) {
            mp[c]++;
            tmp = mp[c];
        } else {
            mp['A']++;
        }
        
        // cout << "s[i] : " << s[i] << " tmp : " << tmp << " c : " << c <<  "\n";
        
        if (s[i] != c && mp['A'] == tmp) {
            answer++;
            // cout << "-----" << c << s[i] << "-----";
            mp[c] = mp['A'] = 0;
            c = s[i+1];
            // cout << i+1 << " 번째로 이동 " << c << "가 이젠 첫문자!\n";
        }
    }
    if (mp[c] > 0 || mp['A'] >0) answer++;
    return answer;
}

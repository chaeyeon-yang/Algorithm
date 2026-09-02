#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    // 65 - 90 (A-Z)
    // 97 - 122 (a-z)
    for(char c: s) {
        if (c == ' ') {
            answer+=c;
        } else {
            // 대소문자
            int tmp = 0;
            cout << c-0 << " ";
            if (65<=c-0 && c-0<=90) { 
                tmp = 'A' + (c-'A'+n)%26;
            } else {
                tmp = 'a' + (c-'a'+n)%26;
            }
            answer += char(tmp);
            tmp=0;
        }
    }
    return answer;
}
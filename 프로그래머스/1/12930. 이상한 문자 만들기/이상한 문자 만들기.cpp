#include <string>
#include <vector>
#include <cctype>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    
    for(int i=0; i<s.size(); i++) {
        if (s[i] == ' ') {
            answer += s[i];
            idx = 0;
            continue;
        } else if (idx%2 == 0) {
            answer += toupper(s[i]);
        } else {
            answer += tolower(s[i]);
        }
        idx++;
    }
    return answer;
}